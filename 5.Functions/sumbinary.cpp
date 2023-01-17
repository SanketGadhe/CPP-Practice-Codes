#include<iostream>
using namespace std;
int sumbinary(int a,int b){
    int i,j,x=0,y=1,carry=0;
    for(a,b;a>0||b>0;a/=10,b/=10){
        i=a%10;
        j=b%10;
if(i==1&&j==1){

x+=y*carry;
carry=1;
}
if(i==0&&j==0){
    x+=y*carry;
    carry=0;
}
if((i==0&&j==1)||(i==1&&j==0)){
    if(carry==1){
        x+=y*0;
       carry=1; 
    }
    else{
    x+=y*1;
carry=0;}}


y*=10;
 }
    if(carry==1)
    x+=y*1;
  

    return x;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<sumbinary(a,b);
}