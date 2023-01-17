#include<iostream>
using namespace std;
int bintodeci(int n){
    int x,y=0;
    x=1;
    for(int i;n>0;n/=10){
        i=n%10;
        y+=x*i;
        x*=2;
    }
    return y;
}
int main(){
    int n;
    cin>>n;
    cout<<bintodeci(n);
}