#include <iostream>
using namespace std;

class Solution{
private:
public:
    int minStartVal(const vector<int>& nums){
        int i = 0;
        int minPrefix = 0;
        int sum = 0;

        while (i < nums.size()){
            sum += nums[i];
            if (sum < minPrefix){
                minPrefix = sum;
            }
            i++;
        }

        if (minPrefix >= 0) return 1; // if startVal is pos
        else return 1 - minPrefix;  // if startVal is neg
    };
};


int main(){
    vector<int> list = {-3, 2, -3, 4, 2};
    Solution s;
    int result = s.minStartVal(list);
    
    cout << result << endl;
}