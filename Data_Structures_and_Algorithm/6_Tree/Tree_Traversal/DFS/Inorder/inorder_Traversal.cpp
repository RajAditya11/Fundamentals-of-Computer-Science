/*

2. INORDER Traversal
Rule
Left -> Root -> Right

Output:

4 2 5 1 3


*/


/*

IMPORTANT PROPERTY
In BST:

Inorder traversal gives sorted order.

This is extremely important.

*/

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

void inorder(TreeNode* root) {

    if(root == NULL)
        return;

    inorder(root->left);

    cout << root->data << " ";

    inorder(root->right);
}

int main()
{
    TreeNode *root = new TreeNode(15);
    root->left = new TreeNode(10);
    root->right = new TreeNode(20);

    inorder(root);
}