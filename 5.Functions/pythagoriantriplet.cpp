#include<iostream>
#include<math.h>
using namespace std;
void pyth(int x,int y,int z){
    int a,b,c;
if(x>y){
    if(x>z){
    a=x;
    b=y;c=z;}
    else{
    a=z;b=y;c=x;}
}
else{
    if(y>z){
    a=y;b=x;c=z;}
    else{
    a=z;b=x;c=y;}
}
if(pow(a,2)==pow(b,2)+pow(c,2))
cout<<"Pythagorian Triplet";
else
cout<<"Not a Pythagorian Triplet";
}
int main(){
int x,y,z;
cin>>x>>y>>z;
pyth(x,y,z);
}