import java.util.*;
class Node {
    int key;
    Node left, right;
    Node(int data) {
        key = data;
        left = right = null;
    }
}
class BST {
    Node root;
    BST(int key) {
        root = new Node(key);
    }
    BST() {
        root = null;
    }

    public static void main(String []args) {
        BST tree = new BST();
        tree.root = new Node(1);
        tree.root.left = new Node(2);
        tree.root.right = new Node(3);
        tree.root.left.left = new Node(4);

        System.out.println(tree);
    }
}