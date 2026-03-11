#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;


vector<int> twoSum(const vector<int>& list, int target){
    unordered_map<int, int> dictionary;
    for (int i = 0; i < list.size(); i++){
        int num = list[i];
        int complement = target - num;
        if (dictionary.count(complement)){
            return {i, dictionary[complement]};
        }
        dictionary[num] = i;
    }
    return {-1, 1};
}


int main(){

}