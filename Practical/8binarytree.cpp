#include<iostream>
using namespace std;
class Node{
    public:
    int d;
    Node* left;
    Node* right;
    Node(int n){
        this->d=n;
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
    Node* add(Node* node,int n){
if(node==NULL){
    return new Node(n);
}
else if(node->d>n){
node->left=add(node->left,n);
    }
    else{
       node->right=add(node->right,n);
       
    }
    return node;
    }
    void add(int n){
        root=add(root,n);
    }
    void preorder(Node *node){
        if(node!=NULL){
        cout<<node->d<<" ";
        preorder(node->left);
        preorder(node->right);}
    }
    void preorder(){
        Node* temp=root;
        preorder(temp);
    }
    void inorder(Node *node)
    {
        if (node != NULL)
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
    {
        if (node != NULL)
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
    t.add(50);
    t.add(30);
    t.add(90);
    t.add(10);
    t.add(40);
    t.preorder();cout<<endl;
    t.inorder();
    cout << endl;
    t.postorder();
}