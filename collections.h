// #pragma once
#include <vector>
#include <iostream>

class Stack {
public:
    Stack();
    void Push(int value);
    int32_t Pop();
    size_t Size() const;
private:
std::vector<int32_t> _stack;
size_t _size;
};