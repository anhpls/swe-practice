#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;


int countElements(const vector<int>& arr){
    unordered_map<int, int> seen;
    int n = arr.size();
    int count = 0;

    for(int x : arr){
        seen[x]++;
    }

    for (auto& [num, freq] : seen){
        if (seen.count(num+1)){
            count += freq;
        }
    }
    
    return count;


    // debug
    // for(auto val : seen){
    //     cout << val.first << ": " << val.second << endl;
    // }

}


int main(){
    vector<int> list = {1, 2, 3};
    cout << countElements(list) << endl;
}