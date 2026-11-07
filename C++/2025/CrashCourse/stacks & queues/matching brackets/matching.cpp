#include <unordered_map>
#include <iostream>
using namespace std;


bool isValid(string s){
    stack<char> stack;
    unordered_map<char, char> matching {{'(',')'}, {'[',']'}, {'{','}'} };

    for (char c: s){
        if(matching.count(c)){
            stack.push(c);
        } else {
            if(stack.empty()){
                return false;
            }

            char previous = stack.top();
            if(matching[previous] != c){
                return false;
            }

            stack.pop();
        }
    }
    return stack.empty();
}


int main(){
    string s = "({})";
    cout << boolalpha << isValid(s) << endl;
}