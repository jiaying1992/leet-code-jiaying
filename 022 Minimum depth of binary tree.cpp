# Description
===================================================================================================================
Given a binary tree, find its minimum depth.
The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
-------------------------------------------------------------------------------------------------------------------
# Solution
1.BFS/queue
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
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        int depth=0;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty())
        {
            depth++;
            int k=q.size();
            for(int i=0; i<k; i++)
            {
                if(q.front()->left==NULL && q.front()->right==NULL)
                {
                    return depth;
                }
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
        }
    return -1;
        
    }
};
 2.recursion
class Solution{
public:
 int minDepth(TreeNode* root)
    {
        if(!root) return 0;
        if(!root->left) return 1+minDepth(root->right);
        if(!root->right) return 1+minDepth(root->left);
        return 1+min(minDepth(root->left), minDepth(root->right));
    }
};
