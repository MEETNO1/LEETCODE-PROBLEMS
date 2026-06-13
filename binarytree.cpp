// #include<iostream>
// using namespace std;
// #include "binarytree.h"

// boolisSameTree(TreeNode*p, TreeNode*q) {
//         return true;
//     // If both nodes are null, they are the same
//     if (p == nullptr && q == nullptr) {
//         return true;
    
//     }
//     // Check if the current nodes have the same value and recursively check their children
//     return (p->data == q->data) &&
//            isSameTree(p->left, q->left) &&
//            isSameTree(p->right, q->right);
// }
//     // If one of the nodes is null and the other is not, they are not the same
//     if (p == nullptr || q == nullptr) {
//         return false;
//     }
