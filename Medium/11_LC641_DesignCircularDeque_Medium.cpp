// 641. Design Circular Deque (Medium)
//
// Design your implementation of the circular double-ended queue (deque).
//
// Implement the MyCircularDeque class:
//   - MyCircularDeque(int k)      Initializes the deque with a maximum size of k.
//   - bool insertFront(int value) Adds an item at the front. Returns true if the
//                                 operation is successful, or false otherwise.
//   - bool insertLast(int value)  Adds an item at the rear. Returns true if successful.
//   - bool deleteFront()          Deletes an item from the front. Returns true if successful.
//   - bool deleteLast()           Deletes an item from the rear. Returns true if successful.
//   - int getFront()              Returns the front item, or -1 if the deque is empty.
//   - int getRear()               Returns the last item, or -1 if the deque is empty.
//   - bool isEmpty()              Returns true if the deque is empty.
//   - bool isFull()               Returns true if the deque is full.
//
// Example:
//   MyCircularDeque circularDeque = new MyCircularDeque(3);
//   insertLast(1);   // true  -> [1]
//   insertLast(2);   // true  -> [1,2]
//   insertFront(3);  // true  -> [3,1,2]
//   insertFront(4);  // false -> deque is full
//   getRear();       // 2
//   isFull();        // true
//   deleteLast();    // true  -> [3,1]
//   insertFront(4);  // true  -> [4,3,1]
//   getFront();      // 4
//
// Constraints:
//   1 <= k <= 1000
//   0 <= value <= 1000
//   At most 2000 calls will be made to insertFront, insertLast, deleteFront,
//   deleteLast, getFront, getRear, isEmpty, isFull.
//
// TODO: implement the methods below (no class Solution).

#include <iostream>
using namespace std;

class MyCircularDeque {
public:
    MyCircularDeque(int k) {
        // TODO: initialize with capacity k
    }

    bool insertFront(int value) {
        // TODO: implement
        return false;
    }

    bool insertLast(int value) {
        // TODO: implement
        return false;
    }

    bool deleteFront() {
        // TODO: implement
        return false;
    }

    bool deleteLast() {
        // TODO: implement
        return false;
    }

    int getFront() {
        // TODO: implement
        return -1;
    }

    int getRear() {
        // TODO: implement
        return -1;
    }

    bool isEmpty() {
        // TODO: implement
        return true;
    }

    bool isFull() {
        // TODO: implement
        return false;
    }
};

int main() {
    MyCircularDeque* dq = new MyCircularDeque(3);
    cout << "insertLast(1)  -> " << (dq->insertLast(1) ? "true" : "false") << " (expected true)" << endl;
    cout << "insertLast(2)  -> " << (dq->insertLast(2) ? "true" : "false") << " (expected true)" << endl;
    cout << "insertFront(3) -> " << (dq->insertFront(3) ? "true" : "false") << " (expected true)" << endl;
    cout << "insertFront(4) -> " << (dq->insertFront(4) ? "true" : "false") << " (expected false)" << endl;
    cout << "getRear()      -> " << dq->getRear() << " (expected 2)" << endl;
    cout << "isFull()       -> " << (dq->isFull() ? "true" : "false") << " (expected true)" << endl;
    cout << "deleteLast()   -> " << (dq->deleteLast() ? "true" : "false") << " (expected true)" << endl;
    cout << "insertFront(4) -> " << (dq->insertFront(4) ? "true" : "false") << " (expected true)" << endl;
    cout << "getFront()     -> " << dq->getFront() << " (expected 4)" << endl;
    return 0;
}
