/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool helper(TreeNode* root, vector<int> arr, int len, int i) {
        if(root==NULL) return len==0;
        if(i==len-1 && root->left==NULL && root->right==NULL && root->val==arr[i]) return true;
        if(i<len && root->val==arr[i]) return helper(root->left, arr, len, i+1) || helper(root->right, arr, len, i+1);
        return false;
    }
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        int len = arr.size();
        int i = 0;
        return helper(root, arr, len, i);
    }
};