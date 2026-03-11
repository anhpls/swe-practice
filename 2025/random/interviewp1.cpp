#include "common.h"


void QuickSort(int* list, int left, int right){
    int i = left;
    int j = right;
    int mid = left + (right - left) / 2;
    int pivot = list[mid];

    while (i <= j){
        while (list[i] < pivot){
            i++;
        }
        while (list[j] > pivot){
            j--;
        }

        if (i <= j){
           int temp = list[i];
            list[i] = list[j];
            list[j] = temp;
            i++;
            j--;
        }
    }

    if (left < j)
    
}


int main(){
    int list[5] = {1, 2, 5, 3, 8};

    for (int i = 0; i < 5; i++){
        cout << list[i] << " ";
    }
    
    cout << endl;

    QuickSort(list, 0, 4);

    for (int i = 0; i < 5; i++){
        cout << list[i] << " ";
    }

}