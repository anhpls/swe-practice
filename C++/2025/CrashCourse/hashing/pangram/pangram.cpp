#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool isPangram(string& sentence){
    /*
        alphabet = 26
        if seen == 26 with no duplicates return true
        else return false
    
    */
    unordered_set<char> seen;
    for(char c : sentence){
        if (isalpha(c)) {
            seen.insert(tolower(c));
        }
    }
    return seen.size() == 26;
}

int main(){
    // string sentence = "thequickbrownfoxjumpsoverthelazydog";
    string sentence = "leetcode";
    cout << boolalpha << isPangram(sentence);
}