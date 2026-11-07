#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution{
private:
public:
    double findSubarr(const vector<int>& list, int k){
       int i = 0;
       double currSum = 0;
       int n = list.size();
    
       if (list.empty()) return 0; 
       if (k > n) return 0;

       // first window
       while (i < k){
            currSum += list[i];
            i++;
       }

       double bestSum = currSum;

       // continues where i left off
       while (i < n){
            currSum += list[i];
            currSum -= list[i-k];
            bestSum = max(bestSum, currSum);
            i++;
       }
       
       return bestSum / double(k);

    }
};


int main(){
    vector<int> list = {5, -3, 20, 170, -29};
    int k = 3;
    Solution s;
    int ans = s.findSubarr(list, k);
    cout << ans << endl;
}