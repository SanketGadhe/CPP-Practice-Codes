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
    cout<<l<<endl;
    return l;
}
int binary_search(int A[],int l,int h,int key){
    int mid;
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
int rotated_search(int a[],int h,int key){
int pivo=pivot(a,h);
if(a[pivo]<=key&&key<=a[h]){
     return binary_search(a,pivo,h,key);
     }
     else
     return binary_search(a,0,pivo-1,key);
}


int main(){
    int a[]={7,9,1,2,3};
    cout<<rotated_search(a,4,7);
}