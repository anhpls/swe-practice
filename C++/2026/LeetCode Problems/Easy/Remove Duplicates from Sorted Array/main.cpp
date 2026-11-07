// unfinished
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int removeDupes(vector<int>& nums){
        int i = 1;
        int k = i + 1;

        while (i < nums.size()){
            if (nums[i] == nums[k - 1]){  //  1 2 2 3 4 5
                i++;
            } else {
                nums[k] = nums[i];
                k++;
                i++;
            }
        }



};


int main(){
    return 0;
}