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
    int maxDepth(TreeNode* root) {
        
        return DFS(root,0);
        

    }
    
public:
    int DFS (TreeNode* root,int level){
        if(root == nullptr){
            return level;
        }
        
        return max(DFS(root->left,level+1),DFS(root->right,level+1));
    }
    

};
