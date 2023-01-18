#include <iostream>
#include "collections.h"

using namespace std;

int main() {
    Stack stack;

    cout << stack.Size() << endl;
    stack.Push(5);
    stack.Push(3);
    stack.Push(2);
    stack.Push(0);

    cout << stack.Size() << endl;
    cout << stack.Pop() << endl;
    cout << stack.Pop() << endl;
    cout << stack.Pop() << endl;
    cout << stack.Pop() << endl;
    cout << stack.Size() << endl;
    
    return 0;
}
