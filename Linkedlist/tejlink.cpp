#include<iostream>
using namespace std;
class Node {
    public:
int data;
Node* next;
Node(int d){
    this->data=d;
    this->next=NULL;  
}
};
void insertathead(Node* &head,int v)
{
Node* temp=new Node(v);
temp->next=head;
head=temp;
}
void display(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
cout<<temp->data<<" ";
temp=temp->next;       
 }
}
int main(){
Node* Node1=new Node(10);
Node* head=Node1;
insertathead(head,20);
insertathead(head,30);
insertathead(head,40);
insertathead(head,50);
display(head);
}