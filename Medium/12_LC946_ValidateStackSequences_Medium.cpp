// 946. Validate Stack Sequences (Medium)
//
// Given two integer arrays pushed and popped, each with distinct values, return true if
// this could have been the result of a sequence of push and pop operations on an
// initially empty stack, or false otherwise.
//
// Example 1:
//   Input: pushed = [1,2,3,4,5], popped = [4,5,3,2,1]   Output: true
// Example 2:
//   Input: pushed = [1,2,3,4,5], popped = [4,3,5,1,2]   Output: false
//
// Constraints:
//   1 <= pushed.length <= 1000
//   0 <= pushed[i] <= 1000
//   All the elements of pushed are unique.
//   popped.length == pushed.length
//   popped is a permutation of pushed.
//
// TODO: implement validateStackSequences below (no class Solution).

#include <iostream>
#include <vector>
using namespace std;

// ---- your function goes here ----
bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
    // TODO: implement
    return false;
}

int main() {
    {   // Case 1
        vector<int> pushed = {1, 2, 3, 4, 5};
        vector<int> popped = {4, 5, 3, 2, 1};
        cout << "Case 1 -> " << (validateStackSequences(pushed, popped) ? "true" : "false")
             << " (expected true)" << endl;
    }
    {   // Case 2
        vector<int> pushed = {1, 2, 3, 4, 5};
        vector<int> popped = {4, 3, 5, 1, 2};
        cout << "Case 2 -> " << (validateStackSequences(pushed, popped) ? "true" : "false")
             << " (expected false)" << endl;
    }
    return 0;
}
