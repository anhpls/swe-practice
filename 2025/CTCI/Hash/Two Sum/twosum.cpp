#include <unordered_map>
#include <iostream>
#include <vector>
using namespace std;

vector<int> TwoSum(vector<int> list, int target){
    
    unordered_map<int, int> seen;

    for(int i = 0; i < list.size(); i++){
        int complement = target - list[i];

        if(seen.count(complement)){
            return {seen[complement], i};
        }
        seen[list[i]] = i;
    }
    return {};
}

void printVector(vector<int>& list){
    for (int num : list){
        cout << num << " " << endl;
    }
}

int main(){
    vector<int> list = {1, 2, 3, 5, 8, 10, 30};
    int target = 8;
    vector<int> indices = TwoSum(list, target);


    printVector(indices);
}