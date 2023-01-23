class Solution {
public:
void preorderTraversal(TreeNode* root,vector<int>&A){
    if(!root){
        return;
        }
        A.push_back(root->val);
        preorderTraversal(root->left,A);
        preorderTraversal(root->right,A);
}
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        preorderTraversal(root,ans);
        return ans;
    }
};
