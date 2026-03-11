#include <unordered_map>
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val): data(val), next(nullptr) {}
};

bool isPalindrome(Node* head){
    Node* slow = head;
    Node* fast = head;

    stack<int> s;
    while(fast && fast->next){
        s.push(slow->data);
        slow = slow->next;
        fast = fast->next->next;
    }

    if (fast) slow = slow->next; // move one more past middle for e

    while (slow){
        if (s.top() != slow->data) return false;
    }
}

void printList(Node* head){
    Node* curr = head;
    while(curr->next != nullptr){
        cout << curr->data << " -> ";
        curr = curr->next;
        if(curr->next == nullptr){
            cout << "null" << endl;
        }

    }
}

int main(){
    // 1 -> 2 -> 3 -> 2 -> 1
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(2);
    head->next->next->next->next->next = new Node(1);
    head->next->next->next->next->next->next = nullptr;

    printList(head);
}