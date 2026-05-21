#include <iostream>

using namespace std;

class TreeNode{
    
public:

    int val; //{this->val}   this belongs to the object
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val ){     // this is temporary val coming to the constructor.
        this->val = val;
        left = nullptr;
    }

    // this is a special pointer that points to the current object.
};


int main(){

    TreeNode* root = new TreeNode(12);

    root->left = new TreeNode(13);
    root->right = new TreeNode(14);

    return 0;
}