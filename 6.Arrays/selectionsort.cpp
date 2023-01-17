#include<iostream>
using namespace std;
int main(){
    int arr[]={64,32,12,14,1,60};
    int minindex,count=0;
    for(int i=0;i<5;i++){
        minindex=i;
        for(int j=i+1;j<6;j++){
            if(arr[minindex]>arr[j]){
                swap(arr[minindex],arr[j]);
            }
        }

    }
   
    for(int i=0;i<6;i++)
     cout<<arr[i]<<" ";   
}