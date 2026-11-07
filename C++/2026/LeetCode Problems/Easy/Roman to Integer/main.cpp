#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution{
private:
public:
    int romanNum(const string& list){
        int total = 0;
        unordered_map<char, int> mapped = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };

        for (int i = 0; i < list.size(); i++){
            int curr = mapped[list[i]]; // curr = current roman symbol value

            // if i+1 is still smaller than size of list 
            // & current roman value is less than next roman value
            if (i + 1 < list.size() && mapped[list[i]] < mapped[list[i+1]]){
                total -= curr;
            } else {
                total += curr;
            }
        }
        return total;
    }
};


int main(){
    string list = "IX";
    Solution s;

    int result = s.romanNum(list);
    cout << result << endl;
}