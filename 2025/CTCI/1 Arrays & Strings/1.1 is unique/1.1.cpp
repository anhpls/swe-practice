// implement an algo to determine if a string has all unique chars. what if you cannot use additional data structures
#include <iostream>
#include <string>
#include <array>
#include <unordered_map>

using namespace std;

bool isUnique(string sentence){
    unordered_map<char, bool> letterMap;

	for (char c : sentence){
        if (letterMap[c]){
            return false; 
        }
        letterMap[c] = true;
    };

    return true;
}

int main(){
    string test = "helpma";
    cout << boolalpha << isUnique(test) << endl; 
}