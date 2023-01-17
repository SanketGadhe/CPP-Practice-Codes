#include<iostream>
using namespace std;
class Node{
    public:
    int cof;
    int pow;
    Node* next;
    Node(int n,int v){
        this->cof=n;
        this->pow=v;
        this->next=NULL;
    }
};
void add(Node* &tail,int n,int v){
    Node* temp=new Node(n,v);
    tail->next=temp;
    tail=temp;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<"("<<temp->cof<<","<<temp->pow<<")"<<"\t";
        temp=temp->next;
    }

}
int main(){
    Node* node=new Node(5,4);
    Node* head=node;
    Node* tail=node;
add(tail, 2, 3);
add(tail, 3, 2);
add(tail, 4, 1);
print(head);
  
}