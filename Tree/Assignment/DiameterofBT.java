/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    class Diameter {
        private int value;
        public Diameter(int value) {
            this.value = value;
        }
    }

    public int diameterOfBinaryTree(TreeNode root) {
        Diameter diameter = new Diameter(0);
        maximumHeight(root, diameter);
        return diameter.value;
    }

    private int maximumHeight(TreeNode root, Diameter diameter) {
        if (root == null) return 0;
        int left = maximumHeight(root.left, diameter);
        int right = maximumHeight(root.right, diameter);
        diameter.value = Integer.max(left + right, diameter.value);
        return 1 + Integer.max(left, right);
    }
}
