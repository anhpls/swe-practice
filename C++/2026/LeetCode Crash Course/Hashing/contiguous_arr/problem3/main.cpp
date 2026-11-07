/*
Problem: Binary Subarrays With Sum

Given a binary array nums (containing only 0s and 1s) and an integer goal,
return the number of non-empty subarrays whose sum equals goal.

A subarray is a contiguous part of the array.
--------------------------------------------------
Example 1:

Input:
nums = [1,0,1,0,1]
goal = 2

Output:
4

Explanation:
The valid subarrays are:
[1,0,1]
[1,0,1,0]
[0,1,0,1]
[1,0,1]
--------------------------------------------------
Example 2:

Input:
nums = [0,0,0,0,0]
goal = 0

Output:
15

Explanation:
Every subarray consisting only of zeros sums to 0.
Since there are 5 elements, the number of possible subarrays is:

5 + 4 + 3 + 2 + 1 = 15
--------------------------------------------------
Constraints:
1 <= nums.length <= 3 * 10^4
nums[i] is either 0 or 1
0 <= goal <= nums.length

k = 3
num =       1  2  1  3
i =         0  1  2  3
sum =       1  3  4  7

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
    int subArrSum(const vector<int>& nums, int k){
        unordered_map<int, int> dict;
        int runningSum = 0;
        int numOfSubArrs = 0;
        
        // prefixsum 0 -> 1 frequency
        dict[0] = 1;

        for(int i = 0; i < nums.size(); i++){
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
    Solution s;
    vector<int> list = {1,0,1,0,1};

    cout << s.subArrSum(list, 2) << endl;
}








