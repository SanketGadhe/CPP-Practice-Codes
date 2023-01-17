#include<iostream>
using namespace std;
class Node{
    public:
    int d;
    Node* left;
    Node* right;
    Node(int v){
        this->d=v;
        this->left=NULL;
        this->right=NULL;
    }
};
class Tree{
    public:
    Node* root;
    Tree(){
        root=NULL;
    }
    Node* add(Node* node,int v){
        if(node==NULL){
            return new Node(v);
        }
        else if(node->d>v){
       node->left=add(node->left,v);
        }
        else
        node->right=add(node->right,v);

        return node;
    }
    void add(int v){
        root=add(root,v);
    }
    void preorder(Node* node){
        if (node!=NULL)
        {
            cout << node->d << " ";
            preorder(node->left);
            preorder(node->right);
        }
        
        
    }
    void preorder(){
        Node*temp=root;
        preorder(temp);  }
    void inorder(Node *node)
    {
        if (node!=NULL)
        {
            inorder(node->left);
            cout << node->d << " ";
            inorder(node->right);
        }
        
       
    }
    void inorder()
    {
        Node *temp = root;
        inorder(temp);
    }
    void postorder(Node *node)
    { if (node!=NULL)
    {
        postorder(node->left);
        postorder(node->right);
        cout << node->d << " ";
    }
    
      
    }
    void postorder()
    {
        Node *temp = root;
        postorder(temp);
    }
};
int main(){
    Tree t;
    t.add(20);
    t.add(40);
    t.add(90);
    t.add(30);
    t.add(0);
    t.preorder();cout<<endl;
    t.inorder();
    cout << endl;
    t.postorder();
    cout << endl;
}