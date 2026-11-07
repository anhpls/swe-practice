#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution{
public:
    int amountOf(const string& jewels, const string& stones){
        unordered_set<char> dict;
        // letter -> freq; A/a : 1
        int count = 0;

        for (char c : jewels){
            dict.insert(c);
        }

        for (char s : stones){
            if (dict.count(s)){
                count++;
            }
        }
        
        return count;
    }
};


int main(){
    return 0;
}