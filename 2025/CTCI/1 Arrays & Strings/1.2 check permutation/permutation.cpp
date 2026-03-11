// given two strings, write a method to decide if one is a permutation of the other
#include <iostream>
#include <string>
#include <array>
#include <algorithm>
using namespace std;

// are characters case-sensitive?
// are whitespaces significant? 
// is there a specific time complexity you would like me to achieve?
// do s1 and s2 have to be the same length?
string sortString(string s){
    sort(s.begin(), s.end());
    return s;
}

bool permutation(string& s1, string& s2){
    if (s1.length() > s2.length()) return false;
    return sortString(s1) == sortString(s2);
}


int main(){
    string s1 = "abc";
    string s2 = "cab";
    cout << boolalpha << permutation(s1, s2);
}
