#include<iostream>
using namespace std;
int main(){
    int n,rev=0;
    cin>>n;
     for(int i;n>0;n=n/10){
        i=n%10;
        rev=rev*10+i;

     }
cout<<rev;
}