#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;

    Node(int val): val(val), next(nullptr){}
};

/*
    1   -->     2   -->     2  -->      3 
    curr
                curr  == curr->next
                            temp                
                curr->next = curr->next->next(3)
*/
void removeDuplicate(Node* head){
    Node* curr = head;
    while (curr != nullptr && curr->next != nullptr){
        if (curr->val == curr->next->val){
            Node* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        } else {
            curr = curr->next;
        }
    }

}


void printList(Node* node){
    while (node != nullptr){
        cout << node->val << " ";
        node = node->next;
    }
    cout << endl;
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(3);

    removeDuplicate(head);
    printList(head);

    return 0;
}