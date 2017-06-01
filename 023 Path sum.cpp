# Description
===================================================================================================================
Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up 
all the values along the path equals the given sum.
For example:
Given the below binary tree and sum = 22,
              5
             / \
            4   8
           /   / \
          11  13  4
         /  \      \
        7    2      1
return true, as there exist a root-to-leaf path 5->4->11->2 which sum is 22.
-------------------------------------------------------------------------------------------------------------------
# Solution
1.DFS/recursion
bool hasPathSum(TreeNode* root, int sum) {
        if(!root) return false;
        if(root->val==sum && root->left==NULL && root->right==NULL) return true;
        return hasPathSum(root->left, sum-root->val) || hasPathSum(root->right, sum-root->val);
    }

2.DFS/stack/preorder traversal
bool hasPathSum(TreeNode* root, int sum)
    {
        if(!root) return false;
        stack<TreeNode *> s;
        s.push(root);
        while(!s.empty())
        {
            TreeNode *p=s.top();
            int mid=p->val;
            s.pop();
            if(p->val==sum && p->left==NULL && p->right==NULL)
            {
                return true;
            }
            if(p->right!=NULL)
            {
                p->right->val+=mid;
                s.push(p->right);
            }
            if(p->left!=NULL)
            {
                p->left->val+=mid;
                s.push(p->left);
            }
        }
        return false;
    }

3. BFS/queue/levelorder traversal
 bool hasPathSum(TreeNode* root, int sum)
    {
        if(!root) return false;
        queue<TreeNode *> q;
        root->val=sum-root->val;
        q.push(root);
        while(!q.empty())
        {
            int midSum=q.front()->val;
            if(midSum==0 && q.front()->left==NULL && q.front()->right==NULL)
            {
                return true;
            }
            if(q.front()->left!=NULL)
            {
                q.front()->left->val=midSum-q.front()->left->val;
                q.push(q.front()->left);
            }
            if(q.front()->right!=NULL)
            {
                q.front()->right->val=midSum-q.front()->right->val;
                q.push(q.front()->right);
            }
            q.pop();
        }
       return false; 
    }