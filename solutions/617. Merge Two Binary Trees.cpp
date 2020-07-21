/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
TreeNode* buildTree(TreeNode* t1, TreeNode* t2) {
    if(t1 == NULL && t2 == NULL) return NULL;
    if(t1 && t2 == NULL) return t1;
    if(t2 && t1 == NULL) return t2;
    t1->val = t1->val + t2->val;
    t1->left = buildTree(t1->left,t2->left);
    t1->right = buildTree(t1->right,t2->right);
    return t1;
}

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(t1 && t2 == NULL) return t1;
        if(t1 == NULL && t2) return t2;
        return buildTree(t1, t2);
    }   
    
};