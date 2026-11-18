#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) {
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == target){
            return i;
        }
    }
     return -1;
}

int main(){
	vector<int> nums;
	for(int i = 0; i < 10; i++){
		nums.push_back((i / 2) * 10);
	}
	cout << search(nums, 30);
}
