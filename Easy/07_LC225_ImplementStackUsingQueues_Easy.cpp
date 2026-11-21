// 225. Implement Stack using Queues (Easy)
//
// Implement a last-in-first-out (LIFO) stack using only two queues. The implemented
// stack should support all the functions of a normal stack (push, top, pop, and empty).
//
// Implement the MyStack class:
//   - void push(int x)  Pushes element x to the top of the stack.
//   - int pop()         Removes the element on the top of the stack and returns it.
//   - int top()         Returns the element on the top of the stack.
//   - bool empty()      Returns true if the stack is empty, false otherwise.
//
// Notes:
//   You must use only standard operations of a queue, which means only push to back,
//   peek/pop from front, size, and is empty operations are valid.
//   You may simulate a queue using a list or deque, as long as you only use the
//   standard queue operations.
//
// Example:
//   Input:  ["MyStack","push","push","top","pop","empty"]  [[],[1],[2],[],[],[]]
//   Output: [null,null,null,2,2,false]
//
// Constraints:
//   1 <= x <= 9
//   At most 100 calls will be made to push, pop, top, and empty.
//   All the calls to pop and top are valid.
//
// TODO: implement the methods below (no class Solution).

#include <iostream>
#include <queue>
using namespace std;

struct Data{
    int data;
    Data* next;
};

class MyStack {
private:
    Data* newData = new Data;
    Data* head = new Data;
public:
    MyStack() {
        head = nullptr;
    }
    
    void push(int x) {
        newData -> data = x;
        newData -> next = nullptr;
        head = newData;
    }
    
    int pop() {
        if (head != nullptr){
            Data* tmp = head;
            head = head -> next;
            return tmp -> data;
            delete tmp;
        }
        return -1;
    }
    
    int top() {
        return head -> data;
    }
    
    bool empty() {
        if(head == nullptr){
            return false;
        }
        return true;
    }
};

int main() {
    MyStack* st = new MyStack();
    st->push(1);
    st->push(2);
    cout << "top()   -> " << st->top() << " (expected 2)" << endl;
    cout << "pop()   -> " << st->pop() << " (expected 2)" << endl;
    cout << "empty() -> " << (st->empty() ? "true" : "false")
         << " (expected false)" << endl;
    return 0;
}
