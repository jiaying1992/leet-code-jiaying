# Description
===============================================================================================================
Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, 
level by level from leaf to root).
For example:
Given binary tree [3,9,20,null,null,15,7],
    3
   / \
  9  20
    /  \
   15   7
return its bottom-up level order traversal as:
[
  [15,7],
  [9,20],
  [3]
]
----------------------------------------------------------------------------------------------------------------
# Solution
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root)
        {
            vector<vector<int>> result;
            return result;
        }
        int depth=maxDepth(root);
        vector<vector<int>> result(depth, vector<int>{});
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty())
        {
            for(int i=0, n=q.size(); i<n; i++)
            {
                result[depth-1].push_back(q.front()->val);
                if(q.front()->left!=NULL)
                {
                    q.push(q.front()->left);
                }
                if(q.front()->right!=NULL)
                {
                    q.push(q.front()->right);
                }
                q.pop();
            }
            depth--;
        }
        return result;
        
    }
    int maxDepth(TreeNode* root)
    {
        return root==NULL? 0 : max(maxDepth(root->right), maxDepth(root->left))+1;
    }
};