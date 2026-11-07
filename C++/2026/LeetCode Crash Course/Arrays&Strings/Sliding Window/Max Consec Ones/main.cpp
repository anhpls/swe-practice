#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution{
private:
public:
    int numOfOnes(const vector<int>& list, int k){
        int left = 0;
        int right = 0;
        int n = list.size();

        int zeroCount = 0;
        int maxLen = 0;

        if (k <= 0) return 0;

        while (right < n){
            if (list[right] == 0) {
                zeroCount++;
            }
            right++;

            // invalid window
            while (zeroCount > k){
                if (list[left] == 0){
                    zeroCount--;
                }
                left++;
            }
          maxLen = max(maxLen, right - left);
        }

        return maxLen;
    }
};

int main(){
    Solution s;
    vector<int> list = {1,1,1,0,0,0,1,1,1,1,0};
    int k = 2;
    int result = s.numOfOnes(list, k);
    cout << result << endl;
}