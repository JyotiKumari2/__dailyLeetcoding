class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root)   return 0;
        return depth(root,0);
    }
    int depth(TreeNode *root, int d){
        if(!root)   return 0;
        if(!root->left && !root->right) return 1;
        int l = depth(root->left,d+1);
        int r = depth(root->right,d+1);
        return 1+min(l==0?INT_MAX:l,r==0?INT_MAX:r);
    }
};