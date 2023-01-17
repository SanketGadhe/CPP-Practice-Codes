#include<iostream>
using namespace std;
int swap(int A[],int n){
cout<<"Array after alternate swaping:";
for(int i=0;i<n;i+=2){
if(i+1<n)
swap(A[i],A[i+1]);
}
return A[n];
}
int main(){
    int A[]={1,2,3,4,5};
    swap(A,5);
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<A[i]<<" ";
    }
}
