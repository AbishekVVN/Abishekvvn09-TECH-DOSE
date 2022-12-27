class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> res;
        if(!root)
            return res;
        TreeNode *prev;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            TreeNode *pNode = q.front();
            q.pop();
            if(pNode!=NULL)
            {
                prev = pNode;
                if(pNode->left) q.push(pNode->left);
                if(pNode->right) q.push(pNode->right);
            }
            else
            {
                res.push_back(prev->val);
                if(q.size()>0) q.push(NULL);
            }
        }
        return res;
    }
};
