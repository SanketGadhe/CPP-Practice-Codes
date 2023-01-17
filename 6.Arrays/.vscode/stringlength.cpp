#include<iostream>
using namespace std;
int getlength(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
char name[20];
cout<<"enter name:";cin>>name;
cout<<"string length:"<<getlength(name);
}
