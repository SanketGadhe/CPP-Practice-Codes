#include<iostream>
using namespace std;
bool search(int A[],int n,int key){
    for(int i=0;i<n;i++){
        if(key==A[i])
        return 1;
    }
    return 0;
}
int main(){
    int A[10],size;
    cin>>size;
    for(int i=0;i<size;i++)
    cin>>A[i];
    int key;
    cout<<"\n Enter the element u want to search";
    cin>>key;
    bool found=search(A,size,key);
    if(found)
    cout<<"Element Found";
    else
    cout<<"Element Not Found";
}