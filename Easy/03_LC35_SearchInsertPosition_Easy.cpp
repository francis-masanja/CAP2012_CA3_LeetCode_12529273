// 35. Search Insert Position (Easy)
//
// Given a sorted array of distinct integers and a target value, return the index if
// the target is found. If not, return the index where it would be if it were inserted
// in order.
//
// You must write an algorithm with O(log n) runtime complexity.
//
// Example 1:
//   Input: nums = [1,3,5,6], target = 5   Output: 2
// Example 2:
//   Input: nums = [1,3,5,6], target = 2   Output: 1
// Example 3:
//   Input: nums = [1,3,5,6], target = 7   Output: 4
//
// Constraints:
//   1 <= nums.length <= 10^4
//   -10^4 <= nums[i] <= 10^4
//   nums contains distinct values sorted in ascending order.
//   -10^4 <= target <= 10^4
//
// TODO: your function goes here (no class Solution).

#include <iostream>
#include <vector>
using namespace std;

// ---- your function goes here ----
int searchInsert(vector<int>& nums, int target) {
    int r = (int)nums.size() - 1, l = 0;
    while (l <= r) {
        int c = l + (r - l) / 2;

        if (nums[c] == target) {
            return c;
        } else if (nums[c] < target) {
            l = c + 1;
        } else {
            r = c - 1;
        }
    }
    return l;
}

int main() {
    {   // Case 1: [1,3,5,6], target = 5 -> 2
        vector<int> nums = {1, 3, 5, 6};
        cout << "Case 1 -> " << searchInsert(nums, 5) << " (expected 2)" << endl;
    }
    {   // Case 2: [1,3,5,6], target = 2 -> 1
        vector<int> nums = {1, 3, 5, 6};
        cout << "Case 2 -> " << searchInsert(nums, 2) << " (expected 1)" << endl;
    }
    {   // Case 3: [1,3,5,6], target = 7 -> 4
        vector<int> nums = {1, 3, 5, 6};
        cout << "Case 3 -> " << searchInsert(nums, 7) << " (expected 4)" << endl;
    }
    return 0;
}
