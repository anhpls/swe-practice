

struct Node {
    int val;
    Node* next;
    Node* prev;

    Node(int val): val(val), next(nullptr), prev(nullptr){}
};

int main(){
    Node* head = new Node(-1);
    Node* tail = new Node(-1);
    head->next = tail;
    tail->prev = head;

    
}