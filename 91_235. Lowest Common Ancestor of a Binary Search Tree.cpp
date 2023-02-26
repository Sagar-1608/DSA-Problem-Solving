// 235. Lowest
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:

    // approcach 2 by eliminating  the right or  left part 
    // time com O(h) here h = height of tree

    TreeNode * LCA(TreeNode * root , int p , int q )
    {
        if(root==NULL) return root;
        
        if(root->val < p && root->val < q)
        {
           return  LCA(root->right ,  p ,  q );

        }
       else if(root->val > p && root->val > q)
        {
           return LCA(root->left ,  p ,  q );

        }
        else 
         return root ;

          

    }


    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {


        //approach 1 by using traversal 
        //time comp O(N) n-number of node in tree

        // if(root == NULL || root->val ==p->val || root->val == q->val )
        //  return root;
        // TreeNode * left = lowestCommonAncestor(root->left,p,q);
        // TreeNode * right = lowestCommonAncestor(root->right, p, q);

        // if(left == NULL) return right;
        // if(right==NULL) return left ;

        // return root;

        return LCA(root, p->val, q->val);
        
    }
};
