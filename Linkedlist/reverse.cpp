#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int n){
        this->data=n;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert(Node* &tail,int n){
 Node* temp=new Node(n);
 tail->next=temp;
 temp->prev=tail;
 tail=temp;
}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void reverse(Node* tail){
Node* temp;
temp=tail;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->prev;
}
cout<<endl;
}
int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    insert(tail,20);
    insert(tail,30);
    insert(tail,40);
    insert(tail,50);
    display(head);
    cout<<"reverse";
    reverse(tail);
}


