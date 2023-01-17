#include<iostream>
using namespace std;
int binary(int arr[],int l,int h,int k){
while(l<=h){
int mid=(l+h)/2;
if(arr[mid]==k)return mid;
else if(arr[mid]>k) {
    h=mid-1;
   }
else
{
    l= mid + 1;
    
}
}
return -1;
}
int main(){
    int arr[] = {1,4,7,9,10};
    int key = 10;
    if (binary(arr, 0,6, key) != -1)
    {
        cout << "position=" << binary(arr,0,6, key);
    }
    else
        cout << "no element found";
}