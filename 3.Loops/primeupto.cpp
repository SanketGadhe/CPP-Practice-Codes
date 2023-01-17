#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter number:";
    cin>>n;
    i=0;
    for(i;i<=n;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                break;} 
                }
        if(i==j){
            cout<<i<<endl;}
    }
    return 0;
}