#include <iostream>
using namespace std;
class Node
{
public:
    int d;
    Node *left;
    Node *right;
    Node(int n)
    {
        this->d = n;
        this->left = NULL;
        this->right = NULL;
    }
};
class Tree
{
public:
    Node *root;
    Tree()
    {
        root = NULL;
    }
    Node *add(Node *node, int n)
    {
        if (node == NULL)
        {
            return new Node(n);
        }
        else if (node->d > n)
        {
            node->left = add(node->left, n);
        }
        else
        {
            node->right = add(node->right, n);
        }
        return node;
    }
    void add(int n)
    {
        root = add(root, n);
    }
    void preorder(Node *node)
    {
        if (node != NULL)
        {
            cout << node->d << " ";
            preorder(node->left);
            preorder(node->right);
        }
    }
    void preorder()
    {
        Node *temp = root;
        preorder(temp);
    }
    int max(Node *node)
    {
        int m = node->d;
        cout << " bc";
        while (node != NULL)
        {
            m = node->d;
            node = node->right;
            cout << " bc";
        }
        cout << " bc";
        cout << m;
        return m;
    }
    int min(Node *node)
    {
        int m = node->d;
        while (node != NULL)
        {
            m = node->d;
            node = node->left;
        }
        return m;
    }

    void remove(int v)
    {
        cout << "remove m aaya\n";
        root = remove(root, v);
    }
    Node *remove(Node *node, int k)
    {
        cout << "remove m aaya\n";
        if (node->d > k)
        {
            node->left = remove(node->left, k);
        }
        else if (node->d < k)
        {
            node->right = remove(node->right, k);
        }
        else
        {
            if (node->left == NULL && node->right == NULL)
            {
                return NULL;
            }
            else if (node->left != NULL)
            {
                return node->left;
            }
            else if (node->left != NULL)
            {
                return node->left;
            }
            else
            {
                cout << "\n yaha aa raha hai kya\n";
                cout << node->left;
                int m = max(node->left);
                cout << m;
                node->d = m;
                node->left = remove(node->left, m);
                cout << "\n yaha gaya raha hai kya";
                return node;
            }
        }
        cout << "\n yaha aa raha hai kya";
        return node;
    }
};
int main()
{
    Tree t;
    t.add(20);
    t.add(90);
    t.add(50);
    t.add(80);
    t.add(10);
    t.preorder();
    cout << "va\n";
    t.remove(50);
    cout << "vnma\n";
    t.preorder();
}