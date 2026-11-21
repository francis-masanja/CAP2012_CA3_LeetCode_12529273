// 42. Trapping Rain Water (Hard)
//
// Given n non-negative integers representing an elevation map where the width of each
// bar is 1, compute how much water it can trap after raining.
//
// Example 1:
//   Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]   Output: 6
//   Explanation: The above elevation map traps 6 units of rain water.
// Example 2:
//   Input: height = [4,2,0,3,2,5]                Output: 9
//
// Constraints:
//   n == height.length
//   1 <= n <= 2 * 10^4
//   0 <= height[i] <= 10^5
//
// TODO: implement trap below (no class Solution).

#include <iostream>
#include <vector>
using namespace std;

// ---- your function goes here ----
int trap(vector<int>& height) {
     int n = height.size();

     int left = 0, right = n - 1;
     int leftMax = 0, rightMax = 0;

     int water = 0;

     while (left < right) {

         if (height[left] < height[right]) {

             if (height[left] >= leftMax) {
                 leftMax = height[left];
             }
             else {
                 water += leftMax - height[left];
             }

             left++;
         }
         else {

             if (height[right] >= rightMax) {
                 rightMax = height[right];
             }
             else {
                 water += rightMax - height[right];
             }

             right--;
         }
     }

     return water;
 }
}

int main() {
    {   // Case 1
        vector<int> h = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
        cout << "Case 1 -> " << trap(h) << " (expected 6)" << endl;
    }
    {   // Case 2
        vector<int> h = {4, 2, 0, 3, 2, 5};
        cout << "Case 2 -> " << trap(h) << " (expected 9)" << endl;
    }
    return 0;
}
