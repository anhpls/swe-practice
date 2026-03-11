#include <iostream>
#include <vector>
using namespace std;

int findLen2(const vector<int>& list){
    int left = 0, curr = 0, ans = 0;

    for (int right = 0; right < list.size(); right++){
        if(list[right] == '0'){
            curr += 1; 
        }

        while(curr > 1){
            if(list[left] == '0'){
                curr--;
            }
            left++;
        }
        ans = max(ans, right - left + 1);
    }
    return ans;
}


int main(){
    vector<int> list = {'1', '0', '0', '1', '1', '1'};
    cout << findLen2(list) << endl;
}