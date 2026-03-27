CC = gcc
CXX = g++

CFLAGS = -Wall -Wextra -std=c11
CXXFLAGS = -Wall -Wextra -std=c++17

C_SRCS = $(wildcard examples_c/*.c)
CPP_SRCS = $(wildcard examples_cpp/*.cpp)

C_BINS = $(patsubst examples_c/%.c,bin/%_c,$(C_SRCS))
CPP_BINS = $(patsubst examples_cpp/%.cpp,bin/%_cpp,$(CPP_SRCS))

TARGETS = $(C_BINS) $(CPP_BINS)

all: $(TARGETS)

bin/%_c: examples_c/%.c | bin
	$(CC) $(CFLAGS) $< -o $@

bin/%_cpp: examples_cpp/%.cpp | bin
	$(CXX) $(CXXFLAGS) $< -o $@

bin:
	mkdir -p bin

clean:
	rm -f bin/*

rebuild: clean all

.PHONY: all clean rebuild