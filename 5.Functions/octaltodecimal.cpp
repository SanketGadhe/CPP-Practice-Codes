#include<iostream>
using namespace std;
int octatodeci(int n){
    int x,y,z;
    y=0;
    z=1;
    for(;n>0;n/=10){
        x=n%10;
        y+=z*x;
        z*=8;

    }
    return y;
}
int main(){
    int n;
    cin>>n;
    cout<<octatodeci(n);
}