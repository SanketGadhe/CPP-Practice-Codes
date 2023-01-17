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
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){  
        cout<<temp->data<<" ";
        temp=temp->next;}
    cout<<endl;
}
int main(){
Node* node1=new Node(10);
Node* head;
head=node1;
int k,n;
cout<<"How many elements You want to insert:";
cin>>k;
cout<<"Insert element:";
for(int i=0;i<k;i++){
    cin>>n;
    insert(head,n);
}  
print(head);
cout<<head->data;
return 0;
}