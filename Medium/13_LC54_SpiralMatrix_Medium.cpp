// 54. Spiral Matrix (Medium)
//
// Given an m x n matrix, return all elements of the matrix in spiral order.
//
// Example 1:
//   Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
//   Output: [1,2,3,6,9,8,7,4,5]
// Example 2:
//   Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
//   Output: [1,2,3,4,8,12,11,10,9,5,6,7]
//
// Constraints:
//   m == matrix.length
//   n == matrix[i].length
//   1 <= m, n <= 10
//   -100 <= matrix[i][j] <= 100
//
// TODO: implement spiralOrder below (no class Solution).

#include <iostream>
#include <vector>
using namespace std;

// ---- your function goes here ----
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    // TODO: implement
    return {};
}

// ---- helper for the test harness ----
void printVector(const vector<int>& v) {
    cout << "[";
    for (size_t i = 0; i < v.size(); i++) {
        if (i) cout << ",";
        cout << v[i];
    }
    cout << "]";
}

int main() {
    {   // Case 1: 3x3
        vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        cout << "Case 1 -> "; printVector(spiralOrder(matrix));
        cout << " (expected [1,2,3,6,9,8,7,4,5])" << endl;
    }
    {   // Case 2: 3x4
        vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
        cout << "Case 2 -> "; printVector(spiralOrder(matrix));
        cout << " (expected [1,2,3,4,8,12,11,10,9,5,6,7])" << endl;
    }
    return 0;
}
