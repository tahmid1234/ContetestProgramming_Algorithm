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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> treaveresedList;
        while (root){
            if(root->left){
                TreeNode* left =root->left;
                while(left->right!=nullptr && left->right!=root ){
                    left=left->right;
                }
                if(left->right==nullptr){
                    
                   
                    left->right=root;
                    root = root->left;
                   
                 
                }
                else{
                  
                    treaveresedList.push_back(root->val);
                    root->left =nullptr;
                    root = root->right;
                    
                    
                }
                  cout<<" left ";
                }
            else
            {
                cout<<" right  ";
                treaveresedList.push_back(root->val);
                root=root->right;
              
            }
         
            }
            
        return treaveresedList;
        }
        
        
        
    }
    
;
