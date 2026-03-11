#include <iostream>
#include <vector>
using namespace std;

class Solution{
private:
public:
    vector<int> sumOfArrPos(const vector<int>& nums){
        vector<int> result = {};
        int i = 0;
        int sum = 0;

        if (nums.empty()) return {};
        while(i < nums.size()){
            sum += nums[i];
            result.push_back(sum); 
            i++;
        }

        return result;
    }
};

int main(){
    vector<int> list = {3,1,2,10,1};
    Solution s;
    vector<int> result = s.sumOfArrPos(list);

    for (int x : result){
        cout << x << " ";
    }
}