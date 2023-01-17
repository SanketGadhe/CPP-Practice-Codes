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
void delte(Node* &head,int pos,Node* tail){
    int count=1;
    Node* current;
    Node* prev;
    prev=head;
    if(pos==1){
head=head->next;
prev->next=NULL;
delete prev;
    }
 while(count<pos-1){
prev=prev->next;
count++;
    }
    
    current=prev->next;
    if(current==NULL){
        prev->next=NULL;
        tail=prev;
        cout<<tail->data<<endl;
    }
    prev->next=current->next;
    current->next=NULL;
    delete current;
    
}
int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    insertattail(tail,20);
    insertattail(tail,30);
    insertattail(tail,40);
    insertattail(tail,50);
    display(head);
    int pos;
    cout<<"Enter the position You want todelete:";
    cin>>pos;
    delte(head,pos,tail);
    display(head);
    cout<<"head="<<head->data;
    cout<<"tail="<<tail->data;
}