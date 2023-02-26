// 653. Two Sum IV - Input is a BST
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
     unordered_map <int , int > mp;
     vector <int> arr;

    void  preorder( TreeNode *root )
    {
        if( root != NULL)
        {
            preorder(root->left);
            arr.push_back(root->val);
            preorder(root->right);

        }

    }

    bool findTarget(TreeNode* root, int k) {
        if(root==NULL) return false;

        preorder(root);

        mp[arr[0]] =0;

        for(int i =1; i<arr.size();i++)
        {
            auto it = mp.find((k- arr[i]));
            if(it!=mp.end()) return true;
            mp[arr[i]]=i;

        }
        return false;

        
    }
};
