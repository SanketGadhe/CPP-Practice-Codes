#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,arm=0,a;
    cin>>n;
    a=n;
    for(int i;n>0;n=n/10){
        i=n%10;
        arm=arm+pow(i,3);
    }
    if(arm==a)
    cout<<"armstong";
    else 
    cout<<"not arm strong";
}