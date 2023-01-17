#include<iostream>
using namespace std;
 int main()
 {
    int A[6]={1,2,3,4,3,5};
    int maxx=INT_MIN,s;
    for(int i=0;i<6;i++)
    {
        if(A[i]>maxx)
        maxx=A[i];
        
    }
    cout<<maxx;
    
 }