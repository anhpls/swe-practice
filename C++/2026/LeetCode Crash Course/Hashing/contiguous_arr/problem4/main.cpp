/*
Problem: Subarray Sum Divisible by K

Given an integer array nums and an integer k,
return the number of non-empty subarrays whose sum is divisible by k.

A subarray is a contiguous part of the array.
--------------------------------------------------
Example 1:

Input:
nums = [4,5,0,-2,-3,1]
k = 5

Output:
7

Explanation:
The following subarrays have sums divisible by 5:

[4,5,0,-2,-3,1]
[5]
[5,0]
[5,0,-2,-3]
[0]
[0,-2,-3]
[-2,-3]
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
    int findSubArrs(const vector<int>& nums, int k){
        int runningSum = 0;
        int numOfSubArrs = 0;
        int remainder = 0;
        unordered_map<int, int> dict;

        // remainder -> frequency
        dict[0] = 1;
        
        for(int i = 0; i < nums.size(); i++){
            runningSum += nums[i];
            remainder = (runningSum % k + k) % k;
            if(dict.count(remainder)){
                numOfSubArrs += dict[remainder];
            }
            dict[remainder]++;
        }

        return numOfSubArrs;
    }
};

int main() {
    
}