#include<iostream>
using namespace std;
class Node {
    public:
    int cof;
    int pow;
    Node* next;
    Node(int n,int v){
        this->cof=n;
        this->pow =v;
        this->next = NULL;
    }
};
void add1(Node *&head, int n, int v)
{
    Node *temp = new Node(n, v);
    head->next = temp;
    head = temp;
}
void add2(Node *&head, int n, int v)
{
    Node *temp = new Node(n, v);
    head->next = temp;
    head = temp;
}
void add3(Node* &head1,Node* &head2,Node* &head3){
    Node *temp1=head1;
    Node *temp2= head2;
    Node *temp3;
    while(temp1!=NULL||temp2!=NULL){
if(temp1->pow==temp2->pow){
temp3=new Node((temp1->cof+temp2->cof),temp1->pow);
temp1=temp1->next;
temp2 = temp2->next;
head3->next=temp3;
head3=temp3;
}
else if (temp1->pow > temp2->pow)
{
    temp3 = new Node(temp1->cof , temp1->pow);
    temp1 = temp1->next;
    head3->next = temp3;
    head3 = temp3;
}
else
{
    temp3 = new Node(temp2->cof, temp2->pow);
    temp2 = temp2->next;
    head3->next = temp3;
    head3 = temp3;
}
}}
void print(Node * &head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << "(" << temp->cof << "," << temp->pow << ")"<< "\t";
        temp = temp->next;
    }}
void print3(Node *&head)
{
    Node *temp = head->next;
    while (temp != NULL)
    {
        cout << "(" << temp->cof << "," << temp->pow << ")"
             << "\t";
        temp = temp->next;
    }
}
    int main()
    {
        Node *node1 = new Node(10, 3);
        Node *head1 = node1;
        Node *tail1 = node1;
        Node *node2 = new Node(20, 3);
        Node *head2 = node2;
        Node *tail2 = node2;
        add1(tail1, 30, 2);
        add2(tail2, 40, 2);
        add1(tail1, 2, 1);
        add2(tail2, 7, 1);
        add1(tail1, 9, 0);
        add2(tail2, 8, 0);

        Node *node3 = new Node(0, 0);
        Node *head3 = node3;
        Node *tail3 = node3;
        print(head1);
        cout<<"\n";
        print(head2);
        cout<<"\n";
        add3(head1,head2,tail3);
        print3(head3);
    }