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

lass MyLinkedList {
private:
    struct ListNode {
        int val;
        ListNode* next;

        ListNode(int x) {
            val = x;
            next = nullptr;
        }
    };

    ListNode* head;
    int size;

public:
    MyLinkedList() {
        head = new ListNode(0);  
        size = 0;
    }

    int get(int index) {
        if(index < 0 || index >= size)
            return -1;

        ListNode* curr = head->next;

        for(int i = 0; i < index; i++) {
            curr = curr->next;
        }

        return curr->val;
    }

    void addAtHead(int val) {
        addAtIndex(0, val);
    }

    void addAtTail(int val) {
        addAtIndex(size, val);
    }

    void addAtIndex(int index, int val) {
        if(index < 0)
            index = 0;

        if(index > size)
            return;

        ListNode* curr = head;

        for(int i = 0; i < index; i++) {
            curr = curr->next;
        }

        ListNode* newNode = new ListNode(val);

        newNode->next = curr->next;
        curr->next = newNode;

        size++;
    }

    void deleteAtIndex(int index) {
        if(index < 0 || index >= size)
            return;

        ListNode* curr = head;

        for(int i = 0; i < index; i++) {
            curr = curr->next;
        }

        ListNode* temp = curr->next;

        curr->next = temp->next;

        delete temp;

        size--;
    }

    ~MyLinkedList() {
        ListNode* curr = head;

        while(curr != nullptr) {
            ListNode* temp = curr;
            curr = curr->next;
            delete temp;
        }
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
