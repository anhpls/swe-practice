#include <iostream>
#include <vector>
using namespace std;


int findLen(vector<int>& list, int k){
    int left = 0, curr= 0, ans = 0;
    int n = list.size();

    for (int right = 0; right < n; right++){
        curr += list[right];
        while (curr > k){
            curr -= list[left];
            left++;
        }
        ans = max(ans, right - left + 1);
    }
    return ans;
}

int main(){
    vector<int> list = {1, 3, 4, 5, 7, 8, 9};
    int k = 8; 
    cout << findLen(list, 8) << endl;
}