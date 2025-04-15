<p align="center">
  <a href="https://github.com/fangtaoysu/c_plus_redis/README.md">中文</a> | 
  <a href="https://github.com/fangtaoysu/c_plus_redis/README_EN.md">English</a>
</p>

# Redis From 0 to 1（手写 Redis 实现）

本项目旨在从零实现一个类 Redis 的高性能键值数据库，涵盖网络通信、事件驱动、数据结构与并发处理等核心模块，帮助理解 Redis 的内部原理。

## 📌 项目结构

- **Part 1：基础构建**
  - Socket 编程
  - TCP 服务端与客户端通信
  - 自定义请求-响应协议
  - 并发 IO 模型（select/epoll）
  - 事件循环（Reactor 模型）
  - 初始键值存储服务（支持 set/get）

- **Part 2：高级特性**
  - 哈希表底层实现（支持冲突解决与动态扩容）
  - 数据序列化与协议解析
  - 平衡二叉树 / 跳表（实现 Sorted Set）
  - 定时器与 TTL 缓存过期机制
  - 多线程任务处理（线程池）

## 🚀 技术栈

- C++ / Python / Rust（按实际使用语言填写）
- TCP Socket 编程
- Reactor 模型 & epoll
- 线程池（任务调度）
- 自定义协议解析
- 哈希表、平衡树、定时器等数据结构

## 📦 功能支持

- ✅ set/get 命令
- ✅ Sorted Set 操作
- ✅ TTL 设置与过期淘汰
- ✅ 多客户端并发连接
- ✅ 多线程任务处理

## 🔧 构建与运行

```bash
# 编译（以 C++ 为例）
g++ -std=c++17 -o redis_server main.cpp

# 运行服务器
./redis_server

# 使用 telnet 或客户端连接测试
telnet 127.0.0.1 6379
