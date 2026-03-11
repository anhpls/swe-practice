#include <vector>
#include <iostream>
using namespace std;

vector<int> combine(vector<int>& list1, vector<int>& list2){
    vector<int> finalList;
    int i = 0, j = 0;
    while(i < list1.size() && j < list2.size()){
        if (list1[i] < list2[j]){
            finalList.push_back(list1[i]);
            i++;
        } else {
            finalList.push_back(list2[j]);
            j++;
        }
    }

    while (i < list1.size()){
        finalList.push_back(list1[i]);
        i++;
    }

    while (j < list2.size()){
        finalList.push_back(list2[j]);
        j++;
    }
    
    return finalList;

}



int main(){
    vector<int> list1 = {1, 2, 5, 10, 13, 25};
    vector<int> list2 = {6, 12, 50};
    vector<int> result = combine(list1, list2);
    for (int x : result){
        cout << x << " ";
    }
    cout << endl;
}