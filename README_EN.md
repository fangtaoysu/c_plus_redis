<p align="center">
  <a href="https://github.com/fangtaoysu/c_plus_redis/blob/main/README.md">中文</a> | 
  <a href="https://github.com/fangtaoysu/c_plus_redis/blob/main/README_EN.md">English</a>
</p>

---

### ✅ English Version README

```markdown
# Redis From 0 to 1 (Build Redis from Scratch)

This project implements a Redis-like high-performance key-value store from scratch, covering networking, event-driven architecture, data structures, and concurrency control.

## 📌 Project Structure

- **Part 1: Foundation**
  - Socket programming
  - TCP server and client communication
  - Custom request-response protocol
  - Concurrent IO models (select/epoll)
  - Event loop with Reactor pattern
  - Basic key-value store (set/get support)

- **Part 2: Advanced Topics**
  - Hash table implementation (collision handling & resizing)
  - Data serialization and protocol parsing
  - Balanced binary tree / skip list (Sorted Set)
  - Timer and TTL-based expiration
  - Thread pool for concurrent tasks

## 🚀 Tech Stack

- C++ / Python / Rust (replace with your actual language)
- TCP Socket Programming
- Reactor pattern with epoll
- Thread pool
- Custom protocol parser
- Core data structures: hash table, BST, timer

## 📦 Supported Features

- ✅ `set` / `get` commands
- ✅ Sorted Set operations
- ✅ Key expiration with TTL
- ✅ Multi-client concurrent connection
- ✅ Thread pool for background task handling

## 🔧 Build & Run

```bash
# Compile (C++ example)
g++ -std=c++17 -o redis_server main.cpp

# Run server
./redis_server

# Use telnet or custom client to test
telnet 127.0.0.1 6379
