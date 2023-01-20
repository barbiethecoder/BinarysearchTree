class Solution {
public:
void reverseinorderTraversal(TreeNode* root,vector<int>&A){
    if(!root){
    return;
    }
   reverseinorderTraversal(root->left,A);
         A.push_back(root->val);
         reverseinorderTraversal(root->right,A);
}
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        reverseinorderTraversal(root,ans);
        return ans;
    } 
};
