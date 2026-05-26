#include <bits/stdc++.h>
using namespace std;

class TreeNode
{

public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

// int solve(TreeNode* root) {

//     if(root == NULL)
//         return?;

//     int left = solve(root->left);
//     int right = solve(root->right);

//     return combine(left, right);
// }