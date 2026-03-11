#include <string>
#include <cmath>
using namespace std;

bool oneReplace(string& s1, string& s2){
    bool foundDifference = false;
    for (int i = 0; i < s1.length(); i++){
        if (s1[i] != s2[i]){
            if (foundDifference) return false;
            foundDifference = true;
        }
    }
    return true;
}

bool editAway(string& s1, string& s2){
    if (abs((int)s1.length() - (int)s2.length()) > 1) return false;

    if (s1.length() == s2.length()){
        return oneReplace(s1, s2);
    } else if (s1.length() )
    
}

int main(){

}