#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    vector<int> avgList(const vector<int>& nums, int k){
        int n = nums.size();
        vector<int> ans(n, -1); // init every element to -1

        int winLen = 2 * k + 1; // window length is k-1 k+1 
        int i = 0;
        int currSum = 0;

        if (winLen > n) return ans; 
        if (k == 0) return nums;

        // first window
        for (i; i < winLen; i++) currSum += nums[i];

        // center of window [0 .. len - 1] is index k
        ans[k] = (int)(currSum / winLen);
        
        // left side of window = 1; right side is left + length of window - 1
        for (int L = 1; L + winLen - 1 < n; L++){
            int outIdx = L - 1;
            int inIndx = L + winLen + 1;

            currSum += nums[inIndx] - nums[outIdx];

            int center = L + k;
            ans[center] = (int)(currSum / winLen);
        }

        return ans;
    };
};

int main(){}