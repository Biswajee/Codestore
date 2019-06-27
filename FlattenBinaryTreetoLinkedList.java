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
    public void flatten(TreeNode root) {
        TreeNode node;
        if(root != null) {
            flatten(root.right);
            flatten(root.left);
            if(root.left != null) {
                node = root.left;
                while(node.right != null) 
                    node = node.right;
                node.right = root.right;
                root.right = root.left;
                root.left = null;
            }
            
        }
    }
}