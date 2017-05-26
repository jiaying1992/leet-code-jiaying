# Description
=================================================================================================
Given a binary tree, find its maximum depth.
The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
---------------------------------------------------------------------------------------------------
# Solution
1、recursion:
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
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        return 1+max(maxDepth(root->right), maxDepth(root->left));
    }
};
2、queue:
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        int depth=0;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty())
        {
            ++depth;
            for(int i=0, n=q.size(); i<n; i++)
            {
                TreeNode *p=q.front();
                q.pop();
                if(p->left!=NULL)
                {
                    q.push(p->left);
                }
                if(p->right!=NULL)
                {
                    q.push(p->right);
                }
            }
        }
        return depth;
    }
};
