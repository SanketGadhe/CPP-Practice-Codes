#include<iostream>
using namespace std;
void merge(int arr[],int l,int h){
cout<<"jarvis";
    int temp[6];
    int mid = l + (h - l) / 2;
    int x=l,y=mid+1,k=0;
    while(x<=mid&&y<=h){
        if(arr[x]<=arr[y])
        temp[k++]=arr[x++];
       else
        temp[k++]=arr[y++];
    }
    while(x<=mid)
    temp[k++]=arr[x];
    while(y<=mid)
    temp[k++]=arr[y];
    for(int x=l,i=0;x<=h;x++){
        arr[x]=temp[i++];
    }
}
void merge_sort(int arr[],int start,int end){
    int mid=start+(end-start)/2;
    merge_sort(arr,start,mid);
    merge_sort(arr, mid+1, end);
    merge(arr,start,end);
    cout<<"hello";
}
int main(){
    cout << "hi";
    int arr[]={3,2,5,1,4};
    merge_sort(arr,0,4);
    cout<<"hi";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}