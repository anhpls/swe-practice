#include <vector>
#include <iostream>
using namespace std;

bool isSubsequence(string a, string b){
    int i = 0, j = 0;
    while(i < a.size() && j < b.size()){
        if(a[i] == b[j]){
            i++;
        }
        j++;
    }
    return i == a.size();
}


int main(){
    string uno = "test";
    string dos = "testicles";
    cout << boolalpha << isSubsequence(uno, dos);
}