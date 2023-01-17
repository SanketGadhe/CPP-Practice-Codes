#include<bits/stdc++.h>
#include<math.h>
using namespace std;
bool possiblesoln(int arr[],int k,int mid){
int cowcount=1;
int lastpos=arr[0];
for(int i=0;i<5;i++){
    if((arr[i]-lastpos)>=mid){
    cowcount++;
    if(cowcount==k){
        return true;
        } 
    lastpos=arr[i];  
    }
    }
return false;
}

int main(){
    int arr[]={4,2,1,3,6};
    sort(arr,arr+5);
    int  s=0;
    int maxi=-1;
    for(int i=0;i<5;i++){
        maxi=max(maxi,arr[i]);
    }
    int e=maxi;
    int mid,ans=-1;
    mid=s+(e-s)/2;
    while(s<=e){
        if(possiblesoln(arr,2,mid)){
             ans=mid;
            s=mid+1;
        }
        else{
        e=mid-1; }
        mid=s+(e-s)/2;
    }
    cout<<ans;
}