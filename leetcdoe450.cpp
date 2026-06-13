#inlcude<iostream>
using namespace std;    

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution{
 public: 
 TreeNode* finMin( TreeNode* root){
    while( root->left !=  NULL)
      root = root->left;
      return root;
 }
 TreeNode* deleteNode(TreeNode* root , int key){
    if( root == NULL) retrun NULL;
 }

}