#include <iostream>
#include <vector>
#include <string>
#include <array>
using namespace std;

// void Swap(int& a, int& b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

// struct Student {
//     string name;
//     int age;

//     Student(string studentName, int studentAge) {
//         name = studentName;
//         age = studentAge;
//     }
// };

int* firstElement(int* arr, int size){
    int* max = arr;

    for (int i = 0; i < size; i++){
        if (arr[i] > *max){
            max = &arr[i];
        }
    }

    return max;
}

int main(){
    int list[5] = {1, 2, 3, 4, 5};
    int* result = firstElement(list, 5);
    cout << *result << endl;

    
    // int* list = new int[5];

    // for (int i = 0; i < 5; i++ ){
    //     list[i] = (i + 1) * 2;
    //     cout << list[i] << endl;
    // }
    // delete[] list;

    // vector<Student> classList;
    // classList.push_back(Student("test", 20));
    // classList.push_back(Student("test2", 22));
    // classList.push_back(Student("test3", 23));
    
    // for (int i = 0; i < classList.size(); i++){
    //     cout << classList[i].name << " " << classList[i].age << endl;
    // }


    // Student student1("presh", 50);

    // cout << student1.name << endl;
    // cout << student1.age << endl;

    // int x = 5;
    // int y = 10;
    // Swap(x, y);

    // cout << x << " " << y << endl;
//    int list[5] = {10, 20, 30, 40, 50};
//    int* ptr = list;
   
//    for (int i = 0; i < 5; i++){
//     cout << *ptr << endl;
//     ptr++;
//    }

   

}