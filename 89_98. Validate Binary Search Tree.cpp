// 98. Validate Binary Search Tree
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

// approch 1
// by using range 


  bool is_BST (TreeNode * root , int lower , int upper){
      if(root==NULL)
      {
          return NULL;
      }
      if(root->val<lower || root->val>upper) //cheaking range 
      {
          return false ;
      }
      //bool a = is_BST(root->left,lower,root->val-1);//range(-00 to rootval -1)
      //bool b = is_BST(root->right,root->val+1,upper);//range(rootval+1 to +00)
      return (is_BST(root->left,lower,root->val-1) && is_BST(root->right,root->val+1,upper));

  }

//   by using preorder traversel that is bst is sorted arry

TreeNode * prev= NULL;
bool isBST(TreeNode * root)
{
    if(root!= NULL)
    {
        if(!isBST(root->left))
        {
            return false;
        }
        if(prev != NULL && root->val <= prev->val)
        {
            return false;
        }
        prev = root;
        return isBST(root->right);

    }
    return true;
}



   
    bool isValidBST(TreeNode* root) {
       
        //return is_BST(root,INT_MIN, INT_MAX);

        return isBST(root);
    }
};
