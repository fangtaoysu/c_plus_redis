#include <asm-generic/socket.h>
#include <cstdlib>
#include <iostream>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <cerrno>
#include <cstring>


void die(const std::string msg) {
    std::cerr << msg << ": " << std::to_string(errno) << std::endl;
    exit(EXIT_FAILURE);
}

int main() {
    // 创建套接字
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) {
        die("socket() failed");
    }

    // 设置套接字选项
    int val = 1;
    if (setsockopt(sockfd, SOL_SOCKET, SO_REUSEADDR, &val, sizeof(val)) < 0) {
        die("setsockopt() failed");
    }
    // 绑定到地址
    struct sockaddr_in addr = {};
    addr.sin_family = AF_INET;
    addr.sin_port = htons(6090);
    addr.sin_addr.s_addr = htonl(INADDR_ANY); // 绑定到所有接口
    
    if (bind(sockfd, reinterpret_cast<struct sockaddr*>(&addr), sizeof(addr)) < 0){
        die("bind() failed");
    }
    std::cout << "Bind successful on port 6090" << std::endl;

    if (listen(sockfd, 5) < 0) {
        die("listen() failed");
    }
    close(sockfd);
    return 0;
}