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
class Solution {
public:
    void inorder (vector<int> & odr , TreeNode* root){
        if(!root){
            return;
        }
        //visit left
        inorder (odr,root->left);
        //visit root
        odr.push_back(root->val);
        //visit right
        inorder (odr,root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> odr;
        inorder (odr,root);
        return odr;
    }
};