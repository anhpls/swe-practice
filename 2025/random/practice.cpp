#include <iostream>
#include <string>
#include <vector>
using namespace std;


// void DoubleValue(int& num){
//         num *= 2;
//         cout << "Value after doubling: " << num << endl; // Output: Value after doubling: 10
// }

// struct Student {
//     string name;
//     int age;
// };



int main() {
    int* ptr = new int;
    *ptr = 99;

    cout << *ptr << endl;

    delete ptr;

    // vector<int> numbers;
    // numbers.push_back(1);
    // numbers.push_back(2);
    // numbers.push_back(3);
    // numbers.push_back(4);
    // numbers.push_back(5);

    // for(int i = 0; i < numbers.size(); i++){
    //     cout << numbers.at(i) << endl;
    // }
    // Student student1 = {"John Doe", 20};
    // cout << student1.name << endl;
    // cout << student1.age << endl;
    // DoubleValue(5);

    
    // int x = 5;
    // int* p = &x;
    // *p = 10; 

    // cout << "Value of x: " << x << endl; // Output: Value of x: 10

    






}