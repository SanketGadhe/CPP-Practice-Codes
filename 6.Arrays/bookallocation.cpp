#include<iostream>
using namespace std;
bool possiblesoln(int arr[],int m,int n,int mid){
    int pagesum,studentcount;
    pagesum=0;
    studentcount=1;
    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            studentcount++;
            if(studentcount>m||arr[i]>mid){
              return false;
            }
          
            pagesum=arr[i];
        }
    }
    return true;

}
int main(){
    int arr[5]={10,20,30,40,50};
    int start=0;
    int sum=0,ans;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    int mid;
    
    while(start<=sum){
        mid=start+(sum-start)/2;
        if(possiblesoln(arr,2,4,mid)){
            ans=mid;
            sum=mid-1;
        }
        else
        start=mid+1;
    }
    cout<<ans;

}