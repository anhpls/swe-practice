#include <iostream>
using namespace std;

int target;

struct Node {
    int val;
    Node* left;
    Node* right;

    Node(int val): val(val), left(nullptr), right(nullptr){}
};

bool hasPathSum(Node* root, int targetSum){
    target = targetSum;
    return dfs(root, 0);
}


bool dfs(Node* node, int curr){
    if (node == nullptr){
        return false;
    }

    if (node->left == nullptr && node->right == nullptr){
        return (curr + node->val) == target;
    }   

    curr += node->val;
    bool left = dfs(node->left, curr);
    bool right = dfs(node->right, curr);
    return left || right;

}



int main(){

}