#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val): data(val), next(nullptr){}
};

bool deleteMiddle(Node* node){
    if (node == nullptr || node->next == nullptr) {
        return false;
    }    

    Node* next = node->next; // create node next that is pointing to parameter's next node
    node->data = next->data; // parameter node's data becomes next's data
    node->next = next->next; // node's next is linked to next's next
    delete next;            // delete next

    return true;
}


int main(){
    Node* head = new Node(5);
    Node* second = new Node(10);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = nullptr;

    cout << boolalpha<< deleteMiddle(third) << endl;
}
