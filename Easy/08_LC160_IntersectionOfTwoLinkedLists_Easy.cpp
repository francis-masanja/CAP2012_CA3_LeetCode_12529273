// 160. Intersection of Two Linked Lists (Easy)
//
// Given the heads of two singly linked-lists headA and headB, return the node at which
// the two lists intersect. If the two linked lists have no intersection at all,
// return null.
//
// For example, the following two linked lists begin to intersect at node c1:
//   A:        a1 -> a2
//                    \
//                     c1 -> c2 -> c3
//                    /
//   B:   b1 -> b2 -> b3
//
// The test cases are generated such that there are no cycles anywhere in the entire
// linked structure.
//
// Note that the linked lists must retain their original structure after the function
// returns.
//
// Example 1:
//   Input:  intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5],
//           skipA = 2, skipB = 3
//   Output: the node with value 8
// Example 2:
//   Input:  intersectVal = 0, listA = [2,6,4], listB = [1,5], skipA = 3, skipB = 2
//   Output: null (no intersection)
//
// Constraints:
//   The number of nodes of listA is in the m range.
//   The number of nodes of listB is in the n range.
//   1 <= m, n <= 3 * 10^4
//   1 <= Node.val <= 10^5
//   0 <= skipA <= m, 0 <= skipB <= n
//   intersectVal is 0 if listA and listB do not intersect.
//   intersectVal == listA[skipA] == listB[skipB] if listA and listB intersect.
//
// TODO: implement getIntersectionNode below (no class Solution).

#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// ---- your function goes here ----
ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
   ListNode* tmpA = headA;
          ListNode* tmpB = headB;
  
          while(tmpA != tmpB){
              tmpA = (tmpA == nullptr) ? headB : tmpA->next;
              tmpB = (tmpB == nullptr) ? headA : tmpB->next;
          }
          return tmpA;
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

// Append a shared tail to the end of a list.
void attach(ListNode* head, ListNode* shared) {
    ListNode* cur = head;
    while (cur->next) cur = cur->next;
    cur->next = shared;
}

int main() {
    {   // Case 1: A=[4,1] + [8,4,5], B=[5,6,1] + [8,4,5] -> intersect at 8
        ListNode* common = buildList({8, 4, 5});
        ListNode* a = buildList({4, 1}); attach(a, common);
        ListNode* b = buildList({5, 6, 1}); attach(b, common);
        ListNode* res = getIntersectionNode(a, b);
        cout << "Case 1 -> " << (res ? to_string(res->val) : "null")
             << " (expected 8)" << endl;
    }
    {   // Case 2: A=[1,2,3], B=[4,5,6] -> no intersection
        ListNode* a = buildList({1, 2, 3});
        ListNode* b = buildList({4, 5, 6});
        ListNode* res = getIntersectionNode(a, b);
        cout << "Case 2 -> " << (res ? to_string(res->val) : "null")
             << " (expected null)" << endl;
    }
    return 0;
}
