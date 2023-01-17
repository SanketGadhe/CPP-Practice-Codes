#include<iostream>
using namespace std;

int binary_search(int A[],int l,int h,int key){
    int mid;
    int pos=-1;
    while(l<=h){
        mid=l+(h-l)/2;
        if(A[mid]==key){
           
            return mid;
        }
         if(A[mid]<key)
        l=mid+1;
        else
        h=mid-1;
    }
return -1;
}
int main(){
    int A[]={2,3,7,9,13,17};
    int key,h;
    cout<<"Enter the element You want to search:";
    cin>>key;
    h=sizeof(A)/sizeof(A[0]);
    if(binary_search(A,0,h-1,key)==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at position:"<<binary_search(A,0,h-1,key);
}