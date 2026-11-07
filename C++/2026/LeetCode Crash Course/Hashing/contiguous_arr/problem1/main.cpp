#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution{
public:
    int maxLen(const vector<int>& nums){
        // key = a runningSum
        // value = first index where it appeared
        unordered_map<int, int> dict;
    
        int runningSum = 0;
        int maxLen = 0;

        /* 
        ex: nums = [0, 1, 0, 0, 1, 1, 0]
        runningSum:    0  -1  0  -1  -2  -1  0  -1
        index:        -1   0  1   2   3   4  5   6
        
        */
        dict[0] = -1;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                runningSum -= 1;
            } else {
                runningSum += 1;    
            }
            if(dict.count(runningSum)){
                maxLen = max(maxLen, i - dict[runningSum]);
            } else{
                dict[runningSum] = i;
            }
        }

        return maxLen;
    }
};

int main() {
    vector<int> nums = {0, 1, 0, 0, 1, 1, 0};
    Solution s;
    cout << s.maxLen(nums) << endl;
}