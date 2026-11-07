#include <iostream>
#include <vector>
using namespace std;


int findMaxConsecutive(const vector<int>& nums, int k){
    int left = 0, zeros = 0, maxLen = 0;


    /*
        k = 2;
        0   1    1   1   0   1   1   0   1
        ^                           ^
        - curr = 3
    */

    for (int right = 0; right < nums.size(); right++){
        if (nums[right] == 0){
            zeros ++;
        }

        while (zeros > k){
            if (nums[left] == 0){
                zeros--;
            }
            left++;
        }
        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}



int main(){
    vector<int> list = {1, 1, 1, 0, 0, 0, 1};
    int k = 2;
    int result = findMaxConsecutive(list, k);
    cout << result << endl;
}