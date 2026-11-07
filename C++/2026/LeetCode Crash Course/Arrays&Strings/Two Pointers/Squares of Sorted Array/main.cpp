/**
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]


Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].



Example 2:

Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]
 */
#include <iostream>
#include <vector>
using namespace std;


class Solution {
private:
public:
    vector<int> squareNums(vector<int>& list){
        int left = 0;
        int right = list.size() - 1;
        int pos = list.size() - 1;
        vector<int> result(list.size());

        while (left <= right){
            if (abs(list[left]) > abs(list[right])) {// ? if left squared is bigger than right then result.push_back(list[left]) but not sure where to include squared logic
                result[pos] = list[left] * list[left];
                left++;
            } else {
                result[pos] = list[right] * list[right];
                right--;
            }            
            pos--;
        }
        return result;
    }

    void printList(vector<int>& list){
        for (int x : list){
            cout << x << " ";
        }

        cout << endl;
    }
};



int main(){
    Solution s;
    vector<int> list = {-4,-1,0,3,10};
    s.printList(list);
    vector<int> result = s.squareNums(list);
    s.printList(result);
}