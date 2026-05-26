void preorder(TreeNode* root) {

    if(root == NULL)
        return;

    stack<TreeNode*> st;
    st.push(root);

    while(!st.empty()) {

        TreeNode* node = st.top();
        st.pop();

        cout << node->val << " ";

        if(node->right)
            st.push(node->right);

        if(node->left)
            st.push(node->left);
    }
}