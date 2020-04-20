// O(n^2)

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* buildBST(TreeNode* &node, int data) {
        if(!node) return node = new TreeNode(data);
        if(data < node->val) node->left = buildBST(node->left, data);
        else node->right = buildBST(node->right, data);
        return node;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode *root = NULL;
        for(int x : preorder)
            buildBST(root, x);
        return root;
    }
};