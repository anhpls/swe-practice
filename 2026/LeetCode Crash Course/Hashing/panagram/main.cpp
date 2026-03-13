#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution{
public:
    bool pangramCheck(const string& phrase){
    unordered_set<char> seen;

    for (char x : phrase){
        seen.insert(x);
    };
    
    return seen.size() == 26;

    };
};

int main(){
    string phrase = "thequickbrownfoxjumpsoverthelazydog";
    Solution s;
    bool result = s.pangramCheck(phrase);
    cout << result << endl;
}