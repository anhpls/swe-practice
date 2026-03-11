/*
Given a sorted array, remove duplicates in-place and return the new length.
*/
#include <iostream>
#include <vector>
using namespace std;

class Solution{
private:
public:
    // assume list[0] is unique so start at index 1
    // [0] [1] [2] 
    //      i   j
    int removeDupe(vector<int>& list){
        int i = 1;  // writer 
        int j = 1;  // scanner

        if (list.empty()) return 0;

        while (j < list.size()){
            if(list[j] != list[i-1]){
                list[i] = list[j];
                i++;
            } 
            j++;
        }
        return i;
    }

    void printList(vector<int>& list){
        for(int x : list){
            cout << x << " ";
        }

        cout << endl;
    }
};



int main(){
    Solution s;
    vector<int> list = {1, 4, 5, 5, 10, 20, 20, 30};

    s.printList(list);
    int newList = s.removeDupe(list);
    cout << newList << endl;
}