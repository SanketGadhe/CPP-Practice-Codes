#include<iostream>
using namespace std;
int peak(int a[],int h){
    int l=0,mid;
    while(l<h){
        mid=l+(h-l)/2;

        if(a[mid]<a[mid+1])
        l=mid+1;
        else
        h=mid;

    }
    return a[mid];
}
int main(){
    int arr[]={1,3,4,5,6,1};
    int s=sizeof(arr)/sizeof(arr[0]);
    int ans=peak(arr,s-1);
    cout<<ans;

}