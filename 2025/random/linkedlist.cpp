#include "common.h"

struct Node {
    int val;
    Node* next;        //pointer called next
};

Node* InsertAtHead(Node* head, int val){
    Node* newNode = new Node;
    newNode->val = val;
    newNode->next = head;
    return newNode;
}

Node* InsertAtEnd(Node* head, int val){
    Node* newNode = new Node;
    newNode->val = val;
    newNode->next = nullptr;

    Node* curr = head;
    while(curr->next != nullptr){
        curr = curr->next;
    }
    curr->next = newNode;

    return head;
}

int main(){
   Node* node1 = new Node;
   Node* node2 = new Node;
   Node* node3 = new Node;
   node1->val = 10;
   node2->val = 20;
   node3->val = 30; 

   node1->next = node2;
   node2->next = node3;
   node3->next = nullptr;

    Node* head = InsertAtHead(node1, 5);
    head = InsertAtEnd(head, 40);

    Node* curr = head;
   while(curr != nullptr){
        cout << curr->val << endl;
        curr = curr->next;
   }
}
