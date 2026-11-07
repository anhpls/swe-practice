#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


vector<vector<string>> groupAnagrams(vector<string>& strs){
    unordered_map<string, vector<string>> groups;

    for(string& x: strs){
        string t = x;
        sort(t.begin(), t.end());
        groups[t].push_back(x);
    }


    vector<vector<string>> ans;
    for (auto [key, val] : groups){
        ans.push_back(val);
    }

    return ans;
}



int main(){

}