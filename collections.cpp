#include "collections.h"

Stack::Stack() {
    _size = 0;
}

void Stack::Push(int32_t value) {
    _stack.push_back(value);

    ++_size;
}

int32_t Stack::Pop() {
    int32_t output_value = _stack.back();
    _stack.pop_back();
    --_size;
    return output_value;
}
size_t Stack::Size() const {
    return _size;
}