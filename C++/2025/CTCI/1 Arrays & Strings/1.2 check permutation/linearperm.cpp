#include <string>
#include <array>
#include <iostream>

using namespace std;

bool isPermutation(string& s1, string& s2){
    if (s1.length() != s2.length()) return false;

    array<int, 128> count = {0}; 

    for (char c : s1){
        count[c]++;
    }

    for (char c : s2){
        count[c]--;
        if (count[c] < 0){
            return false; 
        }
    }

    return true;
    // hello h: 1 e: 1 l: 2 o: 1
    // hllao h: 0 a: -1 l: 0 o: 0 --> return false

}


int main(){
    string s1 = "hello";
    string s2 = "elloh";
    cout << boolalpha << isPermutation(s1, s2);
}