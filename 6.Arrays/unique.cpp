#include<iostream>
using namespace std;
int main(){
    int A[]={2,3,6,6,1,2,3};
      int count=0;
    for(int i=0;i<7;i++){
        count=count^A[i];
    }
    cout<<count;
}