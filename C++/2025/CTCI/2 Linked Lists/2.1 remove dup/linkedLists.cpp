#include <unordered_set>
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val): data(val), next(nullptr){}
};

void removeDuplicates(Node* head){
    if (!head) return;

    unordered_set<int> seen;
    Node* curr = head;
    Node* prev = nullptr;

    while (curr != nullptr){
        if (seen.count(curr->data)){
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        } else {
            seen.insert(curr->data);
            prev = curr;
            curr = curr->next;
        }
    }
}

int main(){
    Node* head = new Node(5);
    head->next = new Node(10);
    head->next->next = new Node(10);
    head->next->next->next = new Node(30);

    // removeDuplicates(head);
    Node* curr = head;
    while(curr){
        cout << curr->data << " ";
        curr = curr->next;
    }


}