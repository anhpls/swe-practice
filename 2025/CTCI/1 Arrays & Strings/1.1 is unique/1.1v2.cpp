#include <iostream>
#include <string>
using namespace std;

bool isUnique(string sentence){
    sort(sentence.begin(), sentence.end());

    for(int i = 1; i < sentence.size(); i++){
        if(sentence[i] == sentence[i-1]){
            return false;
        }
    }
    return true;

}

int main(){
    string test = "helpmaa";
    cout << boolalpha << isUnique(test) << endl; 
}