class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (!root) { return nullptr; }
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()){
            TreeNode* node = q.front(); q.pop();
            if (node->left) { q.push(node->left); }
            if (node->right) { q.push(node->right); }
            swap(node->left, node->right);
        }
        return root;
    }
};
