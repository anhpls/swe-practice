#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int firstUnique(string& s){
    /*
        unordered_map<char, int> seen; 
        if count < 2; return that letter's index
        if count >= 2; move to next letter
    
        string s = "loveleetcode";
    */
    unordered_map<char, int> freq;

    for (char c : s){
        freq[c]++;
    }

    for (int i = 0; i < s.size(); i++){
        if (freq[s[i]] == 1){
            return i;
        }
    }

    return -1;
}


int main(){
    string s = "loveleetcode";
    cout << firstUnique(s) << endl; 
}