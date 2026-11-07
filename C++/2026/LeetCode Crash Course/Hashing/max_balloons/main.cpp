#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution{
public:
    int maxOfTerm(const string& text){
        unordered_map<char, int> list;
          // list = b - 1, etc;
        for (char c : text){
            list[c]++;
        };

        return min({list['b'], list['a'], list['l'] / 2, list['o'] / 2, list['n']});
    }
};

int main() {
    string text = "loonbalxballpoon";
    Solution s;

    cout << s.maxOfTerm(text) << endl;
}