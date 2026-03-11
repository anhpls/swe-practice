#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;


class Solution{
public:
    int countElements(const vector<int>& arr){
        unordered_set<int> seen;
        int numOfElements = 0;
        int i = 0;

        for (int x : arr){
            seen.insert(x);
        }

        // .count in a set: 1 if exists, 0 if DNE
        for (int x : arr){
            if (seen.count(x + 1)){
                numOfElements++;
            }
        }

        return numOfElements;
    };
};


int main(){
    Solution s;
    vector<int> list = {1, 1, 2, 3, 4};

    //int arr[4] = {1, 2, 3, 5};

    cout << s.countElements(list) << endl;
}