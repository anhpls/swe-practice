#include <iostream>
#include <vector>
using namespace std;


int findSum(const vector<int>& list, int k){
    int curr = 0;
    for (int i = 0; i < k; i++ ){
        curr += list[i];
    }
    int ans = curr;

    for (int i = k; i < list.size(); i++){
        curr += list[i] - list[i - k];
        ans = max(ans, curr);
    }
    
    return ans;
}


int main(){

}