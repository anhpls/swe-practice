#include <vector>
#include <iostream>
using namespace std;


double findVal(const vector<int>& nums, int k){
    if (k < 1) return 0;

    double curr = 0;
    double ans = 0;

    for (int i = 0; i < k; i++){
        curr += nums[i];
    }

    ans = curr;

    /*
      k = 4
      nums[i]  1 12 -5 -4 5 6
      i        0  1  2  3 4 5
    */ 

    for (int i = k; i < nums.size(); i++){
        curr += nums[i] - nums[i - k];
        ans = max(ans, curr);
    }

    return ans / k;
}


int main(){
    vector<int> list = {1, 12, -5, -4, 5, 6};
    int k = 4;
    float result = findVal(list, 4);
    cout.precision(6);
    cout << fixed << result << endl;
}