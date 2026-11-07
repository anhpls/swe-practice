#include <vector>
#include <iostream>
using namespace std;

int sumOfEvens(const vector<int>& nums){
    int sum = 0;
    int n = nums.size();


    /*
        nums = [1, 2, 3, 4, 5, 6]
                ^
    
    */
    for(int i = 0; i < n; i++){
        if (nums[i] % 2 == 0){
            sum += nums[i];
        }
    }

    return sum;
}



int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    cout << sumOfEvens(nums) << endl;
}