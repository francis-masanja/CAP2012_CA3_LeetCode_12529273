// 876. Middle of the Linked List (Easy)
//
// Given the head of a singly linked list, return the middle node of the linked list.
//
// If there are two middle nodes, return the second middle node.
//
// Example 1:
//   Input: head = [1,2,3,4,5]     Output: [3,4,5]   (node with value 3)
// Example 2:
//   Input: head = [1,2,3,4,5,6]   Output: [4,5,6]   (node with value 4)
//
// Constraints:
//   The number of nodes in the list is in the range [1, 100].
//   1 <= Node.val <= 100
//
// TODO: implement middleNode below (no class Solution).

#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// ---- your function goes here ----
ListNode* middleNode(ListNode* head) {
    // TODO: implement
    return head;
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

int main() {
    {   // Case 1: [1,2,3,4,5] -> node 3
        ListNode* mid = middleNode(buildList({1, 2, 3, 4, 5}));
        cout << "Case 1 -> " << (mid ? to_string(mid->val) : "null")
             << " (expected 3)" << endl;
    }
    {   // Case 2: [1,2,3,4,5,6] -> node 4
        ListNode* mid = middleNode(buildList({1, 2, 3, 4, 5, 6}));
        cout << "Case 2 -> " << (mid ? to_string(mid->val) : "null")
             << " (expected 4)" << endl;
    }
    return 0;
}
