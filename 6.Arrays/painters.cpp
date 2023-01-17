#include<iostream>
using namespace std;
bool possiblesoln(int arr[],int m,int n,int mid){
    int paintersum=0,paintercount=1;
    for(int i=0;i<m;i++){
        if(paintersum+arr[i]<=mid){
            paintersum+=arr[i];
        }
        else{
            paintercount++;
            if(paintercount>n||arr[i]>mid){
            return false;}
            paintersum=arr[i];
        }
    }
    return true;
}
int main(){
    int arr[5]={5,5,5,5,6};
    int s=0,sum=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    int mid,ans;
    while(s<=sum){
        mid=s+(sum-s)/2;
    if(possiblesoln(arr,5,2,mid)){
         ans=mid;
          sum=mid-1;
    }
    else
    s=mid+1;
}
    cout<<ans;
}