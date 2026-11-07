#include <iostream>
#include <vector>
using namespace std;


vector<int> runningSum(const vector<int>& nums){
    int sum = 0;
    int n = nums.size();

    vector<int> finalList;
    for(int i = 0; i < n; i++){
        sum += nums[i];
        finalList.push_back(sum); 
    }
    return finalList;
}


int main(){
    vector<int> nums = {1, 2, 3, 4};
    vector<int> display = runningSum(nums);
    for (int x : display){
        cout << x << " ";
    }
    cout << endl;
}