// 707. Design Linked List (Medium)
//
// Design your implementation of the linked list. You can choose to use a singly or
// doubly linked list.
//
// Implement the MyLinkedList class:
//   - MyLinkedList()                     Initializes the object.
//   - int get(int index)                 Get the value of the index-th node (0-indexed).
//                                        If the index is invalid, return -1.
//   - void addAtHead(int val)            Add a node of value val before the first element.
//   - void addAtTail(int val)            Append a node of value val as the last element.
//   - void addAtIndex(int index, int val) Add a node of value val before the index-th
//                                        node. If index equals the length, append to end.
//                                        If index > length, the node will not be inserted.
//   - void deleteAtIndex(int index)      Delete the index-th node if the index is valid.
//
// Example:
//   MyLinkedList myLinkedList = new MyLinkedList();
//   myLinkedList.addAtHead(1);
//   myLinkedList.addAtTail(3);
//   myLinkedList.addAtIndex(1, 2);   // linked list becomes 1->2->3
//   myLinkedList.get(1);             // return 2
//   myLinkedList.deleteAtIndex(1);   // now the linked list is 1->3
//   myLinkedList.get(1);             // return 3
//
// Constraints:
//   0 <= index, val <= 1000
//   Please do not use the built-in LinkedList library.
//   At most 2000 calls will be made to get, addAtHead, addAtTail, addAtIndex and
//   deleteAtIndex.
//
// TODO: implement the methods below (no class Solution).

#include <iostream>
using namespace std;

class MyLinkedList {
public:
    MyLinkedList() {
        // TODO: initialize
    }

    int get(int index) {
        // TODO: implement
        return -1;
    }

    void addAtHead(int val) {
        // TODO: implement
    }

    void addAtTail(int val) {
        // TODO: implement
    }

    void addAtIndex(int index, int val) {
        // TODO: implement
    }

    void deleteAtIndex(int index) {
        // TODO: implement
    }
};

int main() {
    MyLinkedList* list = new MyLinkedList();
    list->addAtHead(1);
    list->addAtTail(3);
    list->addAtIndex(1, 2);   // 1->2->3
    cout << "get(1) -> " << list->get(1) << " (expected 2)" << endl;
    list->deleteAtIndex(1);   // 1->3
    cout << "get(1) -> " << list->get(1) << " (expected 3)" << endl;
    return 0;
}
