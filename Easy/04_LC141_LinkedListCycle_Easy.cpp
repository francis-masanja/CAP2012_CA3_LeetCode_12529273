// 141. Linked List Cycle (Easy)
//
// Given head, the head of a linked list, determine if the linked list has a cycle in it.
//
// A cycle exists if there is some node in the list that can be reached again by
// continuously following the next pointer. Internally, pos is used to denote the index
// of the node that tail's next pointer is connected to. Note that pos is not passed as
// a parameter.
//
// Return true if there is a cycle in the linked list. Otherwise, return false.
//
// Example 1:
//   Input: head = [3,2,0,-4], pos = 1   Output: true
// Example 2:
//   Input: head = [1,2], pos = 0        Output: true
// Example 3:
//   Input: head = [1], pos = -1         Output: false
//
// Constraints:
//   The number of the nodes in the list is in the range [0, 10^4].
//   -10^5 <= Node.val <= 10^5
//   pos is -1 or a valid index in the linked-list.
//
// TODO: implement hasCycle below (no class Solution).

#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// ---- your function goes here ----
bool hasCycle(ListNode* head) {
    // TODO: implement
    return false;
}

// ---- helpers for the test harness ----
ListNode* buildList(const vector<int>& vals) {
    ListNode dummy(0);
    ListNode* cur = &dummy;
    for (int v : vals) {
        cur->next = new ListNode(v);
        cur = cur->next;
    }
    return dummy.next;
}

void makeCycle(ListNode* head, int pos) {
    if (!head || pos < 0) return;
    ListNode* tail = head;
    while (tail->next) tail = tail->next;
    ListNode* target = head;
    for (int i = 0; i < pos; i++) target = target->next;
    tail->next = target;
}

int main() {
    {   // Case 1: [3,2,0,-4], pos = 1 -> true
        ListNode* head = buildList({3, 2, 0, -4});
        makeCycle(head, 1);
        cout << "Case 1 -> " << (hasCycle(head) ? "true" : "false")
             << " (expected true)" << endl;
    }
    {   // Case 2: [1,2], pos = 0 -> true
        ListNode* head = buildList({1, 2});
        makeCycle(head, 0);
        cout << "Case 2 -> " << (hasCycle(head) ? "true" : "false")
             << " (expected true)" << endl;
    }
    {   // Case 3: [1], pos = -1 -> false
        ListNode* head = buildList({1});
        makeCycle(head, -1);
        cout << "Case 3 -> " << (hasCycle(head) ? "true" : "false")
             << " (expected false)" << endl;
    }
    return 0;
}
