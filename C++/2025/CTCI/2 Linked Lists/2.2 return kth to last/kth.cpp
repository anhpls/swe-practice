// implement an algo to find the kth to last element of a singly linked list

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val): data(val), next(nullptr){}
};

Node* kthElement(int k, Node* head){
    Node* slow = head; // slow ptr
    Node* fast = head; // fast ptr 

    int x = 0;

    // for (fast = head; x < k; fast = fast->next, x++){};
    
    while (x < k){
        fast = fast->next; 
        x++;
    } 
    
    while(fast->next != nullptr){
        slow = slow->next; 
        fast = fast->next;
    }

    return slow; 

}

// O(n)

int main(){
    // singly -> -> -> 
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = nullptr;

    cout << kthElement(2, head)->data << endl;
    cout << second->data << endl;


}