#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution{
public:
    int maxLen(const vector<int>& nums){
        unordered_map<int, int> dict;
        int runningSum = 0;
        
        for(int x : nums){
            dict[x]++;
        }
    }
};

int main() {
    
}