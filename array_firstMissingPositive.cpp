//============================================================================
// Name        : array_firstMissingPositive.cpp
// Author      : Jenny Cheng
// Copyright   : Your copyright notice
//============================================================================
using namespace std;
#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <queue>
#include <unordered_map>

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
    	int n = nums.size();
    	for(int i = 0; i < n; i++){
    		while(nums[i] > 0 && nums[i] <= n && nums[nums[i]-1] != nums[i] ) swap(nums[i], nums[nums[i]-1]);
    	}
    	for(int i = 0; i < n; i++){
    		if(nums[i] != i+1) return i+1;
    	}
        return n+1;
    }
};
int main()
{
	Solution s;
	vector<int> nums {1, 2, 0};
	cout<<s.firstMissingPositive(nums)<<endl;
	return 0;
}
