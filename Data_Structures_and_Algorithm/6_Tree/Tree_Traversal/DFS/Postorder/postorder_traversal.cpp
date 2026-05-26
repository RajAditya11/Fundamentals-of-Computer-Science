/*

3. POSTORDER Traversal
Rule
Left -> Right -> Root

Output:

4 5 2 3 1

*/


/*

POSTORDER USES

Most important traversal for:

Deleting tree
DP on trees
Height calculation
Diameter
Balanced tree

Because:
You process children BEFORE parent.

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

void postorder(TreeNode* root) {

    if(root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);

    cout << root->data << " ";
}

int main()
{
    TreeNode *root = new TreeNode(15);
    root->left = new TreeNode(10);
    root->right = new TreeNode(20);

    postorder(root);
}