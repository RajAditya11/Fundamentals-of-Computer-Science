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

class Solution {
public:

    int maxDepth(TreeNode* root) {

        //base case to return
        if( root == nullptr ){
            return 0;
        }

        int leftNode = maxDepth(root->left);
        int rightNode = maxDepth(root->right);

        return 1 + max( leftNode , rightNode );
    }

};


