#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

/*
    string s = "";
    return # of vowels

*/


int countVowels(string& s){
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    int count = 0;
    
    for (char c : s){
        if(vowels.count(tolower(c))){
            count++;
        }
    }

    return count; 
}


int main(){
    string s = "hello world";
    cout << countVowels(s) << endl;
}