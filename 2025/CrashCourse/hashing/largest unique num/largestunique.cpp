#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


int largestNum(vector<int>& nums){
    unordered_map<int, int> freq;
    int uniqueMax = -1;

    for (int x : nums){
        freq[x]++;
    }

    for (auto& [num, count] : freq){
        if (count == 1){
            uniqueMax = max(uniqueMax, num);
        }
    }

    return uniqueMax;

}


int main(){
    vector<int> list = {5, 5, 8, 3, 9, 9, 9};
    cout << largestNum(list) << endl;

}