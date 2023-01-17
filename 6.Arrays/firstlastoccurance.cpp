#include<iostream>
using namespace std;
int first_occurance(int A[],int h,int key){
    int mid,b;
    int l=0;
    while(l<=h){
        mid=l+(h-l)/2;
       if(A[mid]==key)
    {  
        b=mid;
       h=mid-1;
    }
   else if(A[mid]<key)
    l=mid+1;
else if(A[mid]>key)
    h=mid-1;
    }
return b;
}
int last_occurance(int arr[],int h,int key){
    int b;
int l=0,mid;
while(l<=h){
    mid=l+(h-l)/2;
    if(arr[mid]==key){
        b=mid;
        l=mid+1;
    }
    else if(arr[mid]<key)
    l=mid+1;
    else if(arr[mid]>key)
    h=mid-1;
}

return b;

}
int main()
{
int arr[]={0,1,1,1,3};
int key=1;
int s=sizeof(arr)/sizeof(arr[0]);
int ans= first_occurance(arr,s-1,key);
cout<<"First occurance:"<<ans;
cout<<"\nLast occurance:"<<last_occurance(arr,s-1,key);
return 0;
}

