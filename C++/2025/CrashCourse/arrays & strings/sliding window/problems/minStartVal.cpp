#include <vector>
#include <iostream>
using namespace std;

/*
    
    startValue = 0;
    nums = {x , x, x, x, x };
    return smallest pos val of startVal; each step has to be >= 1


*/

int minStartValue(const vector<int>& nums){
    int n = nums.size();
    int minSum = 0;
    int sum = 0;


    for(int i = 0; i < n; i++){
        sum += nums[i];
        minSum = min(minSum, sum);
    }
    return 1 - minSum;
}

int main(){
    vector<int> list = {1, 5, 8, 10};
    cout << minStartValue(list) << endl;
}