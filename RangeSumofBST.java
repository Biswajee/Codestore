/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    int sum = 0;
    boolean flag = false;
    // A utility function to do inorder traversal of BST 
    int inorderRec(TreeNode root, int L, int R) { 
        if (root != null) { 
            inorderRec(root.left, L, R); 
            if(root.val == L)
                flag = true;
            if(flag) sum+=root.val;
            if(root.val == R)
                flag = false;
            inorderRec(root.right, L, R);
        }
        return sum;
    } 
    
    public int rangeSumBST(TreeNode root, int L, int R) {
        int res = inorderRec(root, L, R);
        return res;
    }
}