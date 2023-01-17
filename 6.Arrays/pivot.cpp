#include<iostream>
using namespace std;
int pivot(int a[],int h){
    int l=0,mid;
    while(l<h){
        mid=l+(h-l)/2;
        if(a[mid]>=a[0])
        l=mid+1;
        else
        h=mid;
       
    }
    return l;
}
int main(){
    int a[]={7,20,1,3,4};
    int ans=pivot(a,4);
cout<<"pivot is at:"<<ans;
return 0;
}