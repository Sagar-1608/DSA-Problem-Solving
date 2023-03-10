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
 bool mirror(TreeNode* root1, TreeNode* root2)
 {
     if(root1==NULL && root2==NULL){
         return true;
     }
     else if(root1!=NULL && root2!=NULL){
         bool a = mirror(root1->left, root2->right);
         bool b = mirror(root1->right, root2->left);
         if(root1->val==root2->val && a && b){
             return true;
         }
         else{
             return false ;
         }
     }
     else
     {
         return false;
     }
 }
      
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
        {
            return true;
        }
        return mirror(root->left, root->right);
        
    }
};
