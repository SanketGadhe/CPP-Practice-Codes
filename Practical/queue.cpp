#include<iostream>
using namespace std;
int rear=-1,front=-1;
int s[100];
void enqueqe(int n){
    if(rear==-1&&front==-1){
        rear++;
        front++;
        s[rear]=n;
    }
    else if(rear<=10){
        s[++rear]=n;
    }
}
void dequeue()
{
if (front >= 0)
    {

        front++;
    }
}

void display(){
    for(int i=front;i<=rear;i++)
{
    cout<<s[i]<<" ";
}
}
int main(){
    enqueqe(20);
    enqueqe(10);
    enqueqe(90);
    enqueqe(40);
    enqueqe(80);
    display();
    
    dequeue();cout<<"\n";
    display();
}