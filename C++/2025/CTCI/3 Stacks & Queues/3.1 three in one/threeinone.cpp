#include <stack>
#include <iostream>
using namespace std;


const int STACK_SIZE = 100;
int buffer[STACK_SIZE * 3]; // create array named buffer with 100 * 3
int stackPtr[3] = {-1, -1, -1}; // pointers to top of each stack

void push(int stackNum, int val){
    int index = stackNum * STACK_SIZE + (++stackPtr[stackNum]);
    buffer[index];
}

int pop(int stackNum){
    int index = stackNum * STACK_SIZE + stackPtr[stackNum]--;
    return buffer[index];
}

int peek(int stackNum){
    int index = stackNum * STACK_SIZE + stackPtr[stackNum]
}


int main(){
    
}