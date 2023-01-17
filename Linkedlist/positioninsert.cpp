#include<iostream>
using namespace std;
class Daba{
    public:
    int data;
    Daba* next;
Daba(int n){
    this->data=n;
    this->next=NULL;
}
};
void inserattail(Daba* &tail,int v){
     Daba* dabas=new Daba(v);
     tail->next=dabas;
     tail=dabas;
}

void insertathead(Daba* &head,int n){    
    Daba* dabas=new Daba(n);
    dabas->next=head;
    head=dabas;
}
void insertatposition(int pos,Daba* &head,Daba* &tail,int value){
     if(pos==1){
        insertathead(head,value);
        return;
    }
    int count=1;
    Daba* temp;
    temp=head;
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
    inserattail(tail,value);
    return;
}
Daba* dabatoinsert=new Daba(value);
dabatoinsert->next=temp->next;
temp->next=dabatoinsert;
}
void display(Daba* &head){
    Daba* temp;
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    int count=1;
    Daba* dabahead=new Daba(0);
    Daba* head=dabahead;
    Daba* tail=dabahead;
   inserattail(tail,10);
   inserattail(tail,20);
   inserattail(tail,30);
   display(head);
   int pos,value;
   cout<<"enter the position you want to insert:";
cin>>pos;
cout<<"enter the value u want to add at position"<<pos<<":";
cin>>value;
insertatposition(pos,head,tail,value);
display(head);
}
