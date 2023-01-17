#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int n){
        this->data=n;
        this->next=NULL;
    }
};
void insert(Node* &head,int n){
     Node* temp=new Node(n);
     temp->next=head;
     head=temp;
}
 void insertattail(Node* &tail,int n){
    Node* temp=new Node(n);
    tail->next=temp;
    tail=temp;
}

 void display(Node* &head){
     Node* temp=head;
     while(temp!=NULL){
         cout<<temp->data<<" ";
         temp=temp->next;
     }
     cout<<endl;
 }
int main(){
Node* node1=new Node(10);
Node* head;
Node* tail;
tail=node1;
   head=node1;

   insertattail(tail,20);
   insertattail(tail,30);
   insertattail(tail,40);
   display(head);
   return 0;
}