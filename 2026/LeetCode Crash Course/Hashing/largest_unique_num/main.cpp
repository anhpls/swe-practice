#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution{
public:
    int largestUnique(const vector<int>& nums){
        unordered_map<int, int> dict; // create dict for nums
        int largest = -1; // only update if the element is unique 
        
        // loop through nums to create count of how many times a # shows up
        for (int x : nums){ 
            dict[x]++;
        }

        for (int x : nums){
            if(dict[x] == 1){
                largest = max(largest, x);
            }
        }

        return largest;
    }
};

int main() {
    vector<int> nums = {5,7,3,9,4,9,8,3,1};
    Solution s;

    cout << s.largestUnique(nums) << endl;

}