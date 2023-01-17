#include<iostream>
using namespace std;
int decitoocta(int n){
    int i,x=0,y=1;
    for(n;n>0;n/=8){
   i=n%8;
   x+=y*i;
   y*=10;
 }
return x;    
}
int main(){
    int n;
    cin>>n;
    cout<<decitoocta(n);
}