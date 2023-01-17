#include<iostream>
using namespace std;
int top=-1;
int s[100];
void push(int n){
    if(top<=10)
    s[++top]=n;
}
void pop(){
    if(top==-1)return;
    top--;
}
void print(){
    for(int i=0;i<=top;i++){
        cout<<s[i]<<"\t";
    }
}

int main(){
    push(40);
    push(90);
    push(30);
    push(60);
    push(20);
    print();
    cout<<"\n";
    pop();
    print();
}