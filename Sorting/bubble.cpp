#include<iostream>
using namespace std;
void bubble_sort(int arr[],int s){
    for(int i=0;i<s;i++){
        for(int j=0;j<s-i-1;j++){
            if(arr[j+1]<arr[j])
            swap(arr[j],arr[j+1]);

        }
    }
}
void dispaly(int arr[],int s){
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={5,2,4,1,3,7};
    int size=6;
    bubble_sort(arr,6);
  //  display(arr,6);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}