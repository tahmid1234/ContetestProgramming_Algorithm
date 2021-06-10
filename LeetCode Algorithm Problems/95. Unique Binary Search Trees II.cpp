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
    vector<TreeNode*> generateTrees(int n) {
        vector<TreeNode*> a;
        if(n==0)
            return a;
        
        
        return helper(1,n);
    }
    
    vector<TreeNode*> helper(int s,int e){
        vector<TreeNode*> result;
        
        if(s>e){
            result.push_back(nullptr);
            return result ;
        }
        
        for(int i =s ;i<=e;i++){
           vector<TreeNode*>  ls=helper(s,i-1);
           vector<TreeNode*>  rs=helper(i+1,e);
           for(TreeNode* l: ls){
               for(TreeNode* r: rs){
                   
                   TreeNode* currNode = new TreeNode(i);
                    currNode->left = l;
                    currNode->right = r;
                    result.push_back(currNode);
                   
               }
           }
            
        }
        
        return result;
    }
};
