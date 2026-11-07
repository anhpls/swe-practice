#include <iostream>
using namespace std;

struct Node{
    char data;
    Node* next;

    Node(char val): data(val), next(nullptr){}
};

Node* findLoop(Node* head){
    Node* fast = head;
    Node* slow = head;

    // if fast == the node of slow then there's a loop -> return node of slow ptr
    while(fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;
        
        if (slow == fast)break;
    }

    if (!fast || !fast->next) return nullptr;

    slow = head;
    while (slow!= fast){
        slow = slow->next;
        fast = fast->next;
    }
    
    return slow;
}

int main(){
    Node* head = new Node('A');
    Node* second = new Node('B');
    Node* third = new Node('C');
    Node* fourth = new Node('D');
    Node* fifth = new Node('E');


    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = third;

    cout << findLoop(head)->data << endl;
}