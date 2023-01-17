#include<iostream>
using namespace std;
int main(){
    int A[]={1,2,2,3,3,4};
    int B[]={1,2,2,3,3,4,5},c[100];
    int s=sizeof(A)/sizeof(A[0]);
    int s1=sizeof(B)/sizeof(B[0]);
    int i=0,j=0;
    while(i<s&&j<s1){
        if(A[i]==B[j]){
        cout<<A[i];
        i++;
        j++;}
        else if(A[i]<B[j])
        i++;
        else
        j++;

    }
   
}