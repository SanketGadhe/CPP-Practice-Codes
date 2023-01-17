#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=2*n;i++){
        for(int j=1;j<=2*n;j++){
          if(i<=n){
            if(j<=i||j>2*n-i)
            cout<<"*";
            else
            cout<<" ";
          }
          if(i>n){
            if(j<=2*n-i+1||j>=i)
            cout<<"*";
            else
            cout<<" ";
          }
        }
        cout<<"\n";
    }
}