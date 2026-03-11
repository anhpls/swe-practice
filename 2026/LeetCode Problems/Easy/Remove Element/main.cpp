#include <iostream>
#include <vector>
using namespace std;


class Solution {
public: 
    int removeElement(vector<int>& nums, int val){
        int i = 0;
        int end = nums.size() - 1; // last index pointer
        
        if (nums.size() == 0) return 0;

        while (i <= end){
            if (nums[i] == val){
                nums[i] = nums[end];
                end--;
            } else {
                i++;
            }
        }
        return end + 1; // bc its zero indexed
    }
};


int main(){
    return 0;
}