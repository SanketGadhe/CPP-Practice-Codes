#include<iostream>
using namespace std;
void reverse(char name[],int e){
    int s=0;
    while(s<e){
        swap(name[s++],name[e--]);
    }
  cout<<name<<endl;
}
int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
char name[20];
cout<<"enter name:";cin>>name;
int len=getlength(name);
cout<<"string length:"<<len;
reverse(name,len);
cout<<"\nstring after reversing:"<<name;
return 0;
}
