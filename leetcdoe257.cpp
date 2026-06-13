include<iostream>
#include<vector>
using namespace std;

vector<string> binaryTreePaths(TreeNode* root){
  vector<string>ans;
  if( root == NULL)
  return ans;

dfs( root,"", ans);
return ans;
}

void dfs(TreeNode*node, string<path> , vector<string> & ans){
      if(node == NULL) return ;

      if(!path.empty()) path += "->";
      path += to_string(node->val);

      if(node->left == NULL && node->right == NULL ){
        ans.push_back(path);
        return ;
      }
        
      dfs(node->left, ans);
      dfs(node->right, ans);

}
