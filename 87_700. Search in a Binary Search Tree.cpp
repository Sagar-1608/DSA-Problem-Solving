// 700. Search in a Binary Search Tree
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
    TreeNode* searchBST(TreeNode* root, int value) {

        
        //BASE case
        if(root==NULL) return NULL;
        if(root->val==value) return root;
        
        //recursive call
        if(root->val>value) return searchBST(root->left,value);
        else return searchBST(root->right,value);


        
    }
};




