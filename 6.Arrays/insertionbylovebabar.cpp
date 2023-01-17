#include<iostream>
using namespace std;
int main(){
    int arr[]={10,1,7,4,8,2,6,0};
    int temp,count=0;
    for(int i=1;i<8;i++){
        temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp)
            arr[j+1]=arr[j];
            else break;
            count++;
        }
        arr[j+1]=temp;
    }
    cout<<count<<endl;
    for(int i=0;i<8;i++)
    cout<<arr[i]<<" ";
    
}