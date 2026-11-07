#include <unordered_set>
#include <iostream>
#include <vector>

using namespace std;

bool containsDuplicate(vector<int> &nums) {
    if (nums.size() == 0) return false;
    
    unordered_set<int> seen;

    for(int i = 0; i < nums.size(); i++){
      if(seen.count(nums[i])){
          return true;
      } else {
          seen.insert(nums[i]);
      }
    }
    return false;
}

int main(){
    vector<int> nums = {1, 2, 3, 5, 7, 8, 10, 20, 21};
    cout << boolalpha << containsDuplicate(nums);
}
