//Time Complexity- O(N+k)
//Space Complexity- O(N)

class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        
        int ans=-1;
        inorder(root,k,ans);
        return ans;
    }
    
    void inorder(TreeNode* root,int &k,int &ans){
        if(root==NULL){
            return;
        }
        
        inorder(root->left,k,ans);
        k--;
        if(k==0){
            ans=root->val;
            return;
        }
        inorder(root->right,k,ans);
    }
};