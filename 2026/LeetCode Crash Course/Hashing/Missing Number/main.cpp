#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int missingNum(const vector<int>& nums){
        int sum = 0;
        int n = nums.size();
        int expectSum = n * (n + 1) / 2;

        for (int x : nums){
            sum += x;
        }

        return expectSum - sum; 
    };
};

int main(){
    Solution s;

    vector<int> list = {3, 0, 1};
    cout << s.missingNum(list) << endl;
    
    return 0;
}