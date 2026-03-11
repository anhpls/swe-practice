#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node* prev;

    Node(int val): val(val), next(nullptr), prev(nullptr){}
};

Node* reverseList(Node* head, int left, int right){

    /*

                            left                         right
   dummy  ->   1       ->      2      ->      3    ->      4       ->      5
    prev      head            curr          next
              prev          
                            
    */
  
    Node* dummy = new Node(0);
    dummy->next = head;
    Node* prev = dummy;
    for (int i = 0; i < left; i++){
        prev = prev->next; 
    }

    Node* curr = prev->next;
    Node* next = nullptr;
    for (int i = 0; i < right - left; i++){
        next = curr->next;
        curr->next = next->next;
        next->next = prev->next;
        prev->next = next;
    }
    return dummy->next;
}


int main(){

}