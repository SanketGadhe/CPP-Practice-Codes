#include <iostream>
using namespace std;
class Node
{
public:
    int n;
    int data;
    Node *left, *right;
    Node(int n)
    {
        this->n = n;
        left = right = NULL;
    }
};
class BST
{
public:
    Node *root;
    BST() { root = NULL; }
    Node *add(Node *node, int n)
    {
        if (node == NULL)
            return new Node(n);
        else if (node->n > n)
            node->left = add(node->left, n);
        else
            node->right = add(node->right, n);
        return node;
    }
    void add(int n) { root = add(root, n); }
    void inorder(Node *node)
    {
        if (node != NULL)
        {
            inorder(node->left);
            cout << node->n << " ";
            inorder(node->right);
        }
    }
    void inorder()
    {
        cout << "Inorder:";
        Node *temp = root;
        inorder(temp);
        cout << endl;
    }
    void preorder(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        cout << root->data;
        postorder(root->left);
        postorder(root->right);
    }
    void postorder(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        postorder(root->left);
        postorder(root->right);
        cout << root->data;
    }
    int min_node(Node *node)
    {
        if (node != NULL && node->left == NULL)
        {
            return node->n;
        }
        else
        {
            return min_node(node->left);
        }
    }
    int main_node()
    {
        Node *temp = root;
        return min_node(temp);
    }
    int max_node(Node *node)
    {
        if (node != NULL && node->right == NULL)
        {
            return node->n;
        }
        else
        {
            return max_node(node->right);
        }
    }
    int max_node()
    {
        Node *temp = root;
        return max_node(temp);
    }
    void rem(int n)
    {
        root = rem(root, n);
    }
    Node *rem(Node *node, int n)
    {
        if (node->n > n)
        {
            node->left = rem(node->left, n);
        }
        else if (node->n < n)
        {
            node->right = rem(node->right, n);
        }
        else
        {
            if (node->left == NULL && node->right == NULL)
                return NULL;
            else if (node->left != NULL)
                return node->left;
            else if (node->right != NULL)
                return node->right;
            else {
                int d = min_node(node->right);
            node->n = d;
            node->right = rem(node->right, d);
            return node;
        }
    }
    return node;
}
}
;
int main()
{
    BST bst;
    bst.add(50);
    bst.add(40);
    bst.add(30);
    bst.add(10);
    bst.add(80);
    bst.add(90);
    bst.add(150);
    bst.add(60);
    bst.add(35);
    bst.inorder();
    bst.rem(35);
    bst.rem(40);
    bst.inorder();
    return 0;
}
/* output:
Inorder:10 30 35 40 50 60 80 90 150
Inorder:10 30 50 60 80 90 150*/
