#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


class Solution{
public:
    int findSubstring(const string& phrase, const int& k){
        unordered_map<char, int> freq;
        int left = 0;
        int right = 0;  
        int longestLen = 0;


        for (right = 0; right < phrase.size(); right++){
            freq[phrase[right]]++;

            while (freq.size() > k){
                freq[phrase[left]]--;

                if(freq[phrase[left]] == 0){
                    freq.erase(phrase[left]);
                }

                left++;
            }

            longestLen = max(longestLen, right - left + 1);
        }

        return longestLen;

    
    }
};


int main(){
    string phrase = "eceba";

    Solution s;

    cout << s.findSubstring(phrase, 2) << endl;
}