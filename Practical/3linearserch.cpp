#include<iostream>
using namespace std;
int linear(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(k==arr[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={4,9,3,5,2,1};
    int key=0;
    if(linear(arr,6,key)!=-1){
        cout << "position=" << linear(arr, 6, key);
    }
    else
    cout<<"no element found";
}