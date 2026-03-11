#include <vector>
#include <iostream>
using namespace std;


int validSplit(const vector<int>& list){
    int n = list.size();

    vector<long> prefix = {list[0]};

    /*
        list = 1, 2, 3, 4, 5
        prefix = {2 + 5}

    
    */
    for(int i = 1; i < n; i++){
        prefix.push_back(list[i] + prefix.back());
    }

    int ans = 0;
    for (int i = 0; i < n - 1; i++){

    }
}

int main (){}