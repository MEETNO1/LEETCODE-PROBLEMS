#include<iostream>
using namespace std;

int main(){
    struct Node{
        TreeNode* LowestCommonAncestor(TreeNode* node, TreeNode* q, TreeNode* p){
            if( root == NULL || root == q || root == p){
                return root ;

            }

            TreeNode* left = CommonAncestor( root-> left , p ,q);
            TreeNode* right = CommonAncestor( root->left, p ,q);

            if( left & right)
            return root;

            return left ? left : right;

        }
    }