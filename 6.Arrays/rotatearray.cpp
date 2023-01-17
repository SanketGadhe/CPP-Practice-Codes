#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int k;
    cout<<"Enter the position you want to rotate:";
    cin>>k;
    int i=0;
   int temp[5];
   for(int i=0;i<5;i++){
temp[(i+k)%5]=arr[i];
   }

for(int i=0;i<5;i++){
    arr[i]=temp[i];
cout<<arr[i]<<" ";}
cout<<endl;
}