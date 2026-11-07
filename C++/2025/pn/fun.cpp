#include <iostream>
using namespace std;

void printMenu(){
    cout << "                                       " << endl;
    cout << "WELCOME TO A PRECIOUS SUSHI BAR & GRILL" << endl;
    cout << "=======================================" << endl;
    cout << "             Lunch Menu                " << endl;
    cout << "1. Udon                          $10.99" << endl;
    cout << "2. Tonkotsu Ramen                $12.99" << endl;
    cout << "3. Sushi Roll                     $8.99" << endl;
    cout << "4. Rice Bowl                      $7.99" << endl;
    cout << "                                       " << endl;
}


int main(){

    printMenu();

    int userInput;
    cout << "What will you be having today? (Enter a number 1-4)" << endl;
    cin >> userInput;

    if(userInput == 1){
        cout << "Your udon is coming right up!" << endl;
        cout << "-$10.99" << endl;
    } else if (userInput == 2){
        cout << "Yummy a tonkotsu ramen should be right out!" << endl;
        cout << "-$12.99" << endl;
    } else if (userInput == 3){
        cout << "We make the best sushi rolls. I hope you like it." << endl;
        cout << "-$8.99" << endl;
    } else if (userInput == 4){
        cout << "Rice bowls are the most simple meals. One rice bowl coming right up!" << endl;
        cout << "-$7.99" << endl;
    } else {
        cout << "Uh oh we don't have that option. Try again" << endl;
    }

    cout << "                                       " << endl;

}

