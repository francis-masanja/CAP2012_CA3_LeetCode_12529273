// 19. Remove Nth Node From End of List (Medium)
//
// Given the head of a linked list, remove the n-th node from the end of the list and
// return its head.
//
// Example 1:
//   Input: head = [1,2,3,4,5], n = 2   Output: [1,2,3,5]
// Example 2:
//   Input: head = [1], n = 1           Output: []
// Example 3:
//   Input: head = [1,2], n = 1         Output: [1]
//
// Constraints:
//   The number of nodes in the list is sz.
//   1 <= sz <= 30
//   0 <= Node.val <= 100
//   1 <= n <= sz
//
// TODO: implement removeNthFromEnd below (no class Solution).

#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// ---- your function goes here ----
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummy = new ListNode(0);
     dummy->next = head;

     ListNode* slow = dummy;
     ListNode* fast = dummy;

    
     for(int i = 0; i < n; i++) {
         fast = fast->next;
     }

     
     while(fast->next != nullptr) {
         slow = slow->next;
         fast = fast->next;
     }

    
     ListNode* temp = slow->next;
     slow->next = slow->next->next;

     delete temp;

     return dummy->next;
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
    {   // Case 1: [1,2,3,4,5], n = 2 -> [1,2,3,5]
        ListNode* head = removeNthFromEnd(buildList({1, 2, 3, 4, 5}), 2);
        cout << "Case 1 -> "; printList(head); cout << " (expected [1,2,3,5])" << endl;
    }
    {   // Case 2: [1], n = 1 -> []
        ListNode* head = removeNthFromEnd(buildList({1}), 1);
        cout << "Case 2 -> "; printList(head); cout << " (expected [])" << endl;
    }
    {   // Case 3: [1,2], n = 1 -> [1]
        ListNode* head = removeNthFromEnd(buildList({1, 2}), 1);
        cout << "Case 3 -> "; printList(head); cout << " (expected [1])" << endl;
    }
    return 0;
}
