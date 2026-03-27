# Learn C & C++: From Pointers to Advanced C++ Concepts

This repository is a learning project focused on understanding memory and object-oriented programming in depth.

It starts from the fundamentals in C and gradually transitions into more advanced concepts in C++.

## Purpose

The main goal of this repository is to learn and understand:

* Memory allocation
* Expressions and evaluation
* Pointers and low-level memory handling
* Differences between C and C++
* Move semantics in C++
* Advanced object-oriented programming in C++

C is used as a starting point to build a strong foundation, especially for understanding pointers and memory behavior. These concepts are then compared and extended in C++.

## Why C and C++ together?

C helps to clearly understand how memory works at a low level.

C++ builds on top of that knowledge and introduces:

* safer abstractions
* object-oriented programming
* modern features like move semantics

By learning both, it becomes easier to understand what C++ is doing under the hood.

## Project Structure

* `examples_c/` → foundational concepts in C (pointers, memory, basics)
* `examples_cpp/` → C++ implementations and advanced features
* `bin/` → compiled executables
* `Makefile` → build automation

## How to Build

### Build all files

```bash
make
```

### Build a single file

```bash
make bin/example1_c
make bin/example1_cpp
```

## How to Run

```bash
./bin/example1_c
./bin/example1_cpp
```

## Rebuild After Changes

```bash
make
```

Make will only rebuild modified files.

## Force Rebuild

```bash
make rebuild
```

## Clean Build Files

```bash
make clean
```

## Notes

* If you see:

  ```
  make: Nothing to be done for 'all'.
  ```

  it means everything is already up to date.

* Always run `make` from the root directory.

---

## Summary

This repository is designed to move from low-level C concepts to advanced C++ programming, with a strong focus on understanding memory and writing efficient, modern C++ code.
