#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j = i - 1;
        while(j>=0)
        {
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j+1]=temp;
    }
}
int main(){
    int arr[]={3,5,1,2,4};
    insertion_sort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}