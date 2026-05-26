/*

1. PREORDER Traversal


Rule   :   Root -> Left -> Right

Example:

        1
      /   \
     2     3
    / \
   4   5

Output:

1 2 4 5 3

Understand Recusrion :

Iteration

[Left] Node ( 1 ) : Print( node_1 -> value )               { cout << iterator->val; }
             Next line is Recusive call with left   { preorderTraversal( iterator->left ) } // Check if left is there/not (stack will execute this first.)
                                                    { preorderTraversal( iterator->right) } // till then this is waiting
                                                                                            // in call stack.

                            1 --------->

[Left] Node ( 2 ) : Print( node_2-> value )               { cout << iterator->val; }
             Next line is Recusive call with left   { preorderTraversal( iterator->left ) } // Check if left is there/not (stack will execute this first.)
                                                    { preorderTraversal( iterator->right) } // till then this is waiting
                                                                                            // in call stack.
                            1 ---------> 2


[Left] Node( 4 ) : Print( node_4 -> value )               { cout << iterator->val; }
             Next line is Recusive call with left   { preorderTraversal( iterator->left ) } // Check if left is there/not (stack will execute this first.)
                                                    { preorderTraversal( iterator->right) } // till then this is waiting
                                                                                            // in call stack.

[Right] Node( 4 ) : preorderTraversal( iterator->right) nullptr


[Right] Node ( 2 ) : preorderTraversal( iterator->right) 5



                            1 ---------> 2 ---------> 4

                            {  here 4 has no left so the right which is waiting will be called. }
                            {  here 4 has no right also , so finally the Node ( 2 ) left is returned. }\
                            {  here 2 has right so Node ( 2 ) right gets called. }

                            1 ---------> 2 ---------> 4 ---------> 5

Node( 5 ) : Print( node_5 -> value )               { cout << iterator->val; }

Similarly

[Right] Node ( 1 ) : get executed.


*/






/*

Used in:

Copy tree
Serialize tree
Expression trees

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

void preorder(TreeNode *root)
{

    if (root == nullptr)
        return;

    cout << root->data << " ";

    preorder(root->left);
    preorder(root->right);
};

int main()
{
    TreeNode *root = new TreeNode(15);
    root->left = new TreeNode(10);
    root->right = new TreeNode(20);

    preorder(root);
}