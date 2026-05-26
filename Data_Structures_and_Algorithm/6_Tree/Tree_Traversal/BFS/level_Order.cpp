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


void levelOrder(TreeNode* root) {

    if(root == NULL)
        return;

    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()) {

        int size = q.size();

        for(int i = 0; i < size; i++) {

            TreeNode* node = q.front();
            q.pop();

            cout << node->data << " ";

            if(node->left)
                q.push(node->left);

            if(node->right)
                q.push(node->right);
        }

        cout << endl;
    }
}