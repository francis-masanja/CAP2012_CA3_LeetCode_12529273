// 4. Median of Two Sorted Arrays (Hard)
//
// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the
// median of the two sorted arrays.
//
// The overall run time complexity should be O(log (m+n)).
//
// Example 1:
//   Input: nums1 = [1,3], nums2 = [2]        Output: 2.00000
//   Explanation: merged array = [1,2,3] and median is 2.
// Example 2:
//   Input: nums1 = [1,2], nums2 = [3,4]      Output: 2.50000
//   Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
//
// Constraints:
//   nums1.length == m
//   nums2.length == n
//   0 <= m <= 1000
//   0 <= n <= 1000
//   1 <= m + n <= 2000
//   -10^6 <= nums1[i], nums2[i] <= 10^6
//
// TODO: implement findMedianSortedArrays below (no class Solution).

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// ---- your function goes here ----
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    // TODO: implement
    return 0.0;
}

int main() {
    cout << fixed << setprecision(5);
    {   // Case 1: [1,3] + [2] -> 2.0
        vector<int> a = {1, 3}, b = {2};
        cout << "Case 1 -> " << findMedianSortedArrays(a, b)
             << " (expected 2.00000)" << endl;
    }
    {   // Case 2: [1,2] + [3,4] -> 2.5
        vector<int> a = {1, 2}, b = {3, 4};
        cout << "Case 2 -> " << findMedianSortedArrays(a, b)
             << " (expected 2.50000)" << endl;
    }
    return 0;
}
