class Node {
    int data;
    Node left;
    Node right;
}

class BST {
    Node createNewNode(int key) {
        Node n = new Node();
        n.data = key;
        n.right = null;
        n.left = null;
        return n;
    }

    Node insert(Node x, int val) {
        if(x == null) {
            return createNewNode(val);
        }
        if(val > x.data) 
            x.right = insert(x.right, val);
        if(val < x.data)
            x.left = insert(x.left, val);
        return x;
    }
    Node delete(Node x, int val) {
        if(x == null)
            return null;
        if(val < x.data) 
            x.left = delete(x.left, val);
        else if(val > x.data)
            x.right = delete(x.right, val);
        else {
            if(x.left == null || x.right == null) {
                Node temp = null;   // Check for child nodes...
                // If child nodes present, return the child node, else return the node itself...
                temp = x.left == null ? x.right : x.left;
                if(temp == null)
                    return null;
                else
                    return temp;  
            }
            else {
                Node successor = getSuccessor(x);
                x.data = successor.data;
                x.right = delete(x.right, successor.data);
            }
        }  
        return x;
    }

    public Node getSuccessor(Node node) {
        if(node == null)
            return null;
        
        Node temp = node.right;

        while(temp.left != null) {
            temp = temp.left;
        }
        return temp;
    }

    int minValue(Node node) {
        if(node == null)
            return -1;
        if(node.left == null)
            return node.data;
        while(node.left != null) {
            node = node.left;
        }
        return node.data;
    }
}

class BSTGod {
    public static void main(String []args) {
        BST tree = new BST();
        Node node = new Node();
        // insert 8
        tree.insert(node, 8);

        // delete 8 or any value
        tree.delete(node, 8);

        // min value from given node
        tree.minValue(node);
        

    }
}