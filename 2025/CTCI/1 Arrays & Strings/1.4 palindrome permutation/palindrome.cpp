#include <iostream>
#include <string>

using namespace std;

bool permutatedpalin(string& s1){
    
    array<int, 128> count = {0}; // assume ASCII letters

    for (char c : s1){
        if (c == ' ') continue;
            c = tolower(c);
            count[c]++;
        }

        int oddCount = 0;
        for (int freq : count){
            if (freq % 2 != 0){
                oddCount++;
                if (oddCount > 1){
                    return false; 
                }
            }
        }
        
        return true;

}





int main(){
    string test = "sdtaco";

    cout << boolalpha << permutatedpalin(test);
}