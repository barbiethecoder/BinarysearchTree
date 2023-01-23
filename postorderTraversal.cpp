class Solution {
public:
void postorderTraversal(TreeNode* root, vector<int>&A){
    if(!root){
        return;
    }
    postorderTraversal(root->left,A);
    postorderTraversal(root->right,A);
    A.push_back(root->val);
}
    vector<int> postorderTraversal(TreeNode* root) {
vector<int>ans;
postorderTraversal(root,ans);    
    return ans;
    }
};
