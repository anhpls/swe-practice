
struct Node {
    int val;
    Node* next;
    Node* prev;

    Node(int val): val(val), next(nullptr), prev(nullptr){}
};


Node* findNode(Node* head, int k){
    Node* fast = head;
    Node* slow = head;

    for (int i = 0; i < k; i++){
        fast = fast->next;
    }

    while(fast != nullptr){
        fast = fast->next;
        slow = slow->next;
    }

    return slow;
}

int main(){
    
}