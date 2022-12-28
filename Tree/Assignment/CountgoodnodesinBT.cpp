class Solution {
public:
    int goodNodes(TreeNode* root, int pre=INT32_MIN) {
        int res = 0, npre = pre;
        if (root->val >= pre) {++res; npre=root->val;}
        if (root->left) res += goodNodes(root->left, npre);
        if (root->right) res += goodNodes(root->right, npre);
        return res;
    }
};
