#include <iostream>
#include <vector>
using namespace std;

int subArrProd(const vector<int>& list, int k){
    if (k <= 1){
        return 0;
    }
    int left = 0, curr = 1, ans = 0;

    for(int right = 0; right < list.size(); right++){
        curr *= list[right];

        while (curr >= k){
            curr /= list[left];
            left++;
        } 
        ans += right - left + 1;
    }
    return ans;
}



int main(){

}