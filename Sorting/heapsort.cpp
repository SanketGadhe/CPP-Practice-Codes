#include<iostream>
using namespace std;
void heap_sort(int arr[],int i,int n){
    int large=i;
    int left=2*i;
    int right=2*i+1;
    if(arr[large]<arr[left]&&left<n){
        large=left;
    }
    if (arr[large] < arr[right]&&left<n)
    {
        large = right;
    }
    if(large!=i){
        swap(arr[large],arr[i]);
        heap_sort(arr,large,n);
    }
}
int main(){
    int arr[]={-1,3,8,9,1,7};
    int n=5;
    for(int i=n/2;i>0;i--){
            heap_sort(arr,i,n);
    }
    for (int i = 1; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

}