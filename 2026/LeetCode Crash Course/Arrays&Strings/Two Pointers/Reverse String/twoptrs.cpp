/*
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

 

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseList(vector<string>& list){
        int left = 0;
        int right = list.size() - 1;

        while (left < right){
            string temp = list[left];
            list[left] = list[right];
            list[right] = temp;

            left++;
            right--;
        }
    }

    void printList(vector<string>& list){
        for (string a : list){
            cout << a << " ";
        }
        cout << endl;
    }
};







int main(){
    Solution reversal;
    vector<string> s = {"h","e","l","l","o"};
    
    reversal.printList(s);
    reversal.reverseList(s);
    reversal.printList(s);
}