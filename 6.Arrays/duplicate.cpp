#include<iostream>
using namespace std;
int main(){
    int A[]={1,2,3,4,3};
    int s;
    s=(sizeof(A)/sizeof(A[0]));
    int ans=0;    
    for(int i=0;i<s;i++){
        ans^=A[i];
    }
    for(int j=0;j<s;j++) {
        ans^=j;
        }
        cout<<ans;
        return 0;
    }