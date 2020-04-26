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
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> q;
        
        q.emplace(root);
        q.emplace(root);
        
        while (!q.empty()) {
            TreeNode *t1= q.front();
            q.pop();
            TreeNode *t2= q.front();
            q.pop();
            
            if (t1 == NULL & t2 == NULL) continue;
            if (t1 == NULL || t2 == NULL) return false;
            if (t1->val != t2->val) return false;
            
            q.emplace(t1->left);
            q.emplace(t2->right);
            
            q.emplace(t1->right);
            q.emplace(t2->left);
        }
        
        return true;
    }
};