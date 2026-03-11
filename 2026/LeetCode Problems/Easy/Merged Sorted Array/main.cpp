#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1; // last index for nums1
        int j = n - 1; // last index for nums2
        int k = m + n - 1; // total size of both lists
    
        // inefficient because could become O(m*n)
        // for (int a = 0; a < i; a++){
        //     for (int b = 0; b < j; b++){
        //         if (nums1[i] <= nums2[k]){
        //             continue;
        //         }
        //         nums1.push_back(nums2[k]);
        //     }
        // }

        // merge from the back
        while (j >= 0){
            if (i >= 0 && nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
    }


    void printList(vector<int>& a, vector<int>& b){
        for(int x : a){
            cout << x << " ";
        }
        cout << endl;

        for (int x : b){
            cout << x << " ";
        }
        cout << endl;
    }
};

int main(){
    Solution s;
    vector<int> a = {1, 2, 5, 8, 10, 0, 0, 0};
    vector<int> b = {4, 5, 6};
    int m = 5, n = 3;

    s.printList(a, b);
    s.merge(a, m, b, n);
    s.printList(a, b);

    return 0;
}