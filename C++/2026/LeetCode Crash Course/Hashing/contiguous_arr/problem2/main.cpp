/*
Prompt
Given an integer array nums and an integer k, return the total number of subarrays whose sum equals k.

A subarray is a contiguous non-empty sequence of elements within an array.

Example
nums = [1,1,1]
k = 2

Output
2
*/

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution{
public:
    int findSubArrays(const vector<int>& nums, int k){
        int runningSum = 0;
       int numOfSubArrs = 0;
        unordered_map<int, int> dict;

        dict[0] = 1;
        /* dict: prefixSum -> frequency
        
        */
        for (int i = 0; i < nums.size(); i++){
            runningSum += nums[i];
            if(dict.count(runningSum - k)){
                numOfSubArrs += dict[runningSum - k];
            }
            dict[runningSum]++;
        }

        return numOfSubArrs;
    }
};

int main() {
    vector<int> nums = {1, 1, 1};
    Solution s;
    cout << s.findSubArrays(nums, 2) << endl;
}