#include <unordered_map>
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int numOfVowels(string& s){
    unordered_map<char, int> freq;
    unordered_set<char> seen = {'a', 'e', 'i', 'o', 'u'};

    /*
        freq = {                seen = {a e i o u}
                a: 1,
                p: 2, 
                l: 1, 
                e: 1
                };
    */
    for(char c: s){
        if (freq.count(c)){
            freq[c]++;
        }
    }

    for (int i = 0; i < s.size(); i++){
        if ()
    }


}


int main(){

}