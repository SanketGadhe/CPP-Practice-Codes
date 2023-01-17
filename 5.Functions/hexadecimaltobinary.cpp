#include<iostream>
#include<string.h>
using namespace std;
int hexattodeci(string n){
int s,x,y;
x=1;
y=0;
s=n.size();
for(int i=s-1;i>=0;i--){
    if(n[i]>='0'&&n[i]<='9'){
         y+=x*(n[i]-'0');
    }
    else if(n[i]>='A'&&n[i]<='F'){
        y+=x*(n[i]-'A'+10);
    }
    x*=16;

}
return y;
}
int main(){
    string n;
    cin>>n;
    cout<<hexattodeci(n);
}