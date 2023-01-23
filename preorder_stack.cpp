class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>s;
        if(root){
             s.push(root);
        }
        while(!s.empty()){
            TreeNode*temp=s.top();
            ans.push_back(temp->val);
            s.pop();
            if(temp->right){
                s.push(temp->right);
                temp->right=NULL;
            }
                if(temp->left)
                    s.push(temp->left);
                    temp->left= NULL;
                
        }
        return ans;
    }
};
