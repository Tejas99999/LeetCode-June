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
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return root;
        TreeNode*temp=root;
        queue<TreeNode*>q;
        q.push(temp);
        while(!q.empty())
        {
            if(q.front()!=NULL)
            {
            q.push(q.front()->left);
            q.push(q.front()->right);
            //q.front()->left=q.front()->right;
                TreeNode*temp=q.front()->left;
                q.front()->left=q.front()->right;
                q.front()->right=temp;
            }
            q.pop();
        }
        return root;
    }
};
