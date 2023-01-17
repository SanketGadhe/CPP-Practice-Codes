#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,flag;
flag=0;
    cout<<"Enter number:";
    cin>>n;
    int i;
    for(i=2;i<sqrt(n);i++){
        if(n%i==0){
            cout<<"non prime";
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Prime";
    }
}