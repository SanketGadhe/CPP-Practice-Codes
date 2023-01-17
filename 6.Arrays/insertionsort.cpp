#include<iostream>
using namespace std;
int main(){
    int arr[]={10,1,4,9,3,12,17,0};
    int temp;
    for(int i=1;i<8;i++){
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
            else 
            break;
        }
    }
    for(int i=0;i<8;i++)
    cout<<arr[i]<<" ";
}