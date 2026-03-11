#include <vector>
#include <iostream>

using namespace std;


bool checkTarget(vector<int>& list, int target){
    int left = 0;
    int right = list.size() - 1;

    while (left < right){
        int curr = list[left] + list[right];
        if (curr == target){
            return true;
        }

        if (curr > target){
            right--;
        } else {
            left++;
        }
    }
    return false;
}
   
int main(){
    vector<int> list = {2, 3, 4, 5, 6, 7, 8};
    int num = 13;
    cout << boolalpha << checkTarget(list, num) << endl;
}