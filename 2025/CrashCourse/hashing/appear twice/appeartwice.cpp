#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

char duplicateChar(string& s){
    unordered_set<char> seen;

    for (char x : s ){
        if(seen.count(x)){
            return x;
        } else {
           seen.insert(x);
        }
    }
    return ' ';
}


int main(){
    string phrase = "abcdeafg";
    cout << duplicateChar(phrase) << endl;
}