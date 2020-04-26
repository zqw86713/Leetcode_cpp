// by recursion.
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
            if (root == NULL) {
                    return 0;
            }
            
            
            return max(maxDepth(root->left) , maxDepth(root->right)) + 1;
        
    }
};

// by iteration.

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
            
        if (root == NULL) 
                return 0;
            
        queue<TreeNode *> q;
        int depth = 0;
        
        q.push(root);
        while(!q.empty()) {
               ++depth;
                
               for (int i = 0, n = q.size(); i<n; i++) {
                       TreeNode *p = q.front();
                       q.pop();
                       
                       if (p->left != NULL) {
                               q.push(p->left);
                       }
                       
                       if (p->right != NULL) {
                               q.push(p->right);
                       }
               }
                
                
                
        }
        
        return depth;
            
    }
};