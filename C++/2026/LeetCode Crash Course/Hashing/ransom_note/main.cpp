#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


class Solution{
public:
    bool ransom(const string& ransomNote, const string& magazine){
        unordered_map<char, int> dict;

        for (char c : magazine){
            dict[c]++;
        };

        for (char b: ransomNote){
            dict[b]--;
            if (dict[b] < 0){
                return false;
            }
        }
        return true;
    }
};


int main(){

}