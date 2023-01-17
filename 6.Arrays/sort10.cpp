#include<iostream>
using namespace std;
int main(){
    int A[]={1,1,0,0,0,0,1,0};
    int i,j;
    i=0;
    j=7;
    while(i<j){
        while(A[i]==0&&i<j){
        i++;}
      while(A[j]==1&&i<j){j--;}
       if(i<j){
       swap(A[i],A[j]);
        i++; j--;}}


    for(int i=0;i<8;i++){
    cout<<A[i];}
}