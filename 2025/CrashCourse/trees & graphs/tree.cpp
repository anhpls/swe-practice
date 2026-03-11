using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val): val(val), left(nullptr), right(nullptr){}
};


void dfs(TreeNode* node){
    if (node == nullptr){
        return;
    }

    dfs(node->left);
    dfs(node->right);
    return;
}


int main(){

}