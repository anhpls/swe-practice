#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

/*
    nums = [];
    n = [0, n]

*/


int missingNum(const vector<int>& nums){
    unordered_map<int, bool> seen;
    int n = nums.size();

    for (int x: nums){
        seen[x] = true;
    }

    for(int i = 0; i <= n; i++){
        if(!seen[i]) return i;
    }

    return -1;
}

int main(){
    vector<int> nums = {0, 2, 3, 4};
    cout << missingNum(nums) << endl;
}