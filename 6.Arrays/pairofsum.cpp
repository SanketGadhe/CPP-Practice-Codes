#include<iostream>
using namespace std;
int main(){
    int A[]={1,2,3,4,5};
    int s=5;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if((A[i]+A[j])==s){
            cout<<min(A[i],A[j]);
            cout<<max(A[i],A[j]);
            cout<<endl;}
        }
    }
}