#include <vector>
#include <stack>
#include <iostream>
using namespace std;

class SetOfStacks {
    private:
        vector<stack<int>> stacks;
        int capacity;

    public: 
        SetOfStacks(int cap){
            capacity = cap;
        }

        void push(int value);
        int pop();
        int popAt(int index);
};

void SetOfStacks::push(int value){
    if (stacks.empty() || stacks.back().size() == capacity){
        stack<int> newStack;
        newStack.push(value);
        stacks.push_back(newStack);
    } else {
        stacks.back().push(value);
    }
}

int SetOfStacks::pop(){
    if(stacks.empty()) throw runtime_error("No stacks to pop from.");

    int value = stacks.back().top();
    stacks.back().pop();

    return value;
}

int SetOfStacks::popAt(int index){
    if(stacks.empty()) throw runtime_error("No value exists.");

    if (index < 0 || index >= stacks.size()){
        throw out_of_range("Invalid Index.");
    }

    if (stacks[index].empty()){
        throw runtime_error("Index value is empty.");
    }

    int value = stacks[index].top();
    stacks[index].pop();

    return value;
}

int main(){

}