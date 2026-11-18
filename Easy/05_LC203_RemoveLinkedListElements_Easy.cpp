// 203. Remove Linked List Elements (Easy)
//
// Given the head of a linked list and an integer val, remove all the nodes of the
// linked list that have Node.val == val, and return the new head.
//
// Example 1:
//   Input: head = [1,2,6,3,4,5,6], val = 6   Output: [1,2,3,4,5]
// Example 2:
//   Input: head = [], val = 1                Output: []
// Example 3:
//   Input: head = [7,7,7,7], val = 7         Output: []
//
// Constraints:
//   The number of nodes in the list is in the range [0, 10^4].
//   1 <= Node.val <= 50
//   0 <= val <= 50
//
// TODO: implement removeElements below (no class Solution).

#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// ---- your function goes here ----
ListNode* removeElements(ListNode* head, int val) {
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

void printList(ListNode* head) {
    cout << "[";
    for (ListNode* cur = head; cur; cur = cur->next) {
        if (cur != head) cout << ",";
        cout << cur->val;
    }
    cout << "]";
}

int main() {
    {   // Case 1: [1,2,6,3,4,5,6], val = 6 -> [1,2,3,4,5]
        ListNode* head = removeElements(buildList({1, 2, 6, 3, 4, 5, 6}), 6);
        cout << "Case 1 -> "; printList(head); cout << " (expected [1,2,3,4,5])" << endl;
    }
    {   // Case 2: [], val = 1 -> []
        ListNode* head = removeElements(buildList({}), 1);
        cout << "Case 2 -> "; printList(head); cout << " (expected [])" << endl;
    }
    {   // Case 3: [7,7,7,7], val = 7 -> []
        ListNode* head = removeElements(buildList({7, 7, 7, 7}), 7);
        cout << "Case 3 -> "; printList(head); cout << " (expected [])" << endl;
    }
    return 0;
}
