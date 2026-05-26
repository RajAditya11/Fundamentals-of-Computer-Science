#include <bits/stdc++.h>
using namespace std;

class TreeNode {

private:
    int data;
    TreeNode* left;
    TreeNode* right;

public:

    TreeNode(int val)
        : data(val), left(nullptr), right(nullptr) {}

    // Getter
    int getData() {
        return data;
    }

    TreeNode* getLeft() {
        return left;
    }

    TreeNode* getRight() {
        return right;
    }

    // Setter
    void setLeft(TreeNode* node) {
        left = node;
    }

    void setRight(TreeNode* node) {
        right = node;
    }
};

void preorder(TreeNode* root) {

    if(root == nullptr)
        return;

    cout << root->getData() << " ";

    preorder(root->getLeft());
    preorder(root->getRight());
}

int main() {

    TreeNode* root = new TreeNode(15);

    root->setLeft(new TreeNode(10));
    root->setRight(new TreeNode(20));

    preorder(root);
}