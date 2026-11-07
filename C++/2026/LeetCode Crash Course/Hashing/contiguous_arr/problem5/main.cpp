#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

/*
Problem: Continuous Subarray Sum

Given an integer array nums and an integer k, return true if nums has
a continuous subarray of size at least 2 whose elements sum to a multiple of k.

In other words, check if there exists a subarray where:

    subarray_sum % k == 0

and the subarray length >= 2.

--------------------------------------------------

Example 1:

Input:
nums = [23,2,4,6,7]
k = 6

Output:
true

Explanation:
[2,4] sums to 6
6 % 6 = 0

*/
class Solution{
public:
    bool contSubArr(const vector<int>& nums, int k){
        unordered_map<int, int> dict;
        // remainder -> first index seen

        int runningSum = 0;
        int remainder = 0;
        
        dict[0] = -1;

        for(int i = 0; i < nums.size(); i++){
            runningSum += nums[i];
            remainder = (runningSum % k + k) % k;
            if (dict.count(remainder)){
                if (i - dict[remainder] >= 2) return true;
            } else {
                dict[remainder] = i;
            }
        }
        return false;
    }
};

int main() {
    
}