#include <iostream>
using namespace std;

struct Node {
  int val;
  Node* next;
  Node* prev;
  
  Node(int val): val(val), next(nullptr), prev(nullptr){}
};

Node* findMiddle(Node* head){
    Node* fast = head;
    Node* slow = head;

    while(fast != nullptr && fast->next != nullptr){
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;

}

void printList(Node* node){
    while (node != nullptr){
        cout << node->val << " ";
        node = node->next;
    }
    cout << endl;
}

int main(){
    Node* head = new Node(-1);
    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = nullptr;

    Node* middle = findMiddle(head);
    cout << middle->val << endl;
}