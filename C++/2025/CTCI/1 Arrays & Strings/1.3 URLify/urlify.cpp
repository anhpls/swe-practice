#include <iostream>
#include <string>

using namespace std;

void replace(char str[], int len){
    int spaceCount = 0;
    for (int i = 0; i < len; i++){
        if (str[i] == ' ') spaceCount++;
    }

    int index = len + spaceCount * 2;
    str[index] = '\0';

    for (int i = len - 1; i >= 0; i--){
        if (str[i] == ' '){
            str[index - 1] = '0';
            str[index - 2] = '2';
            str[index - 3] = '%';
            index -= 3;
        } else {
            str[index - 1] = str[i];
            index--;
        }
    }
}



int main(){
    char str[100] = "Mr John Smith   ";
    int len = 13;

    replace(str, len);
    cout << "\"" << str << "\"" << endl;
}