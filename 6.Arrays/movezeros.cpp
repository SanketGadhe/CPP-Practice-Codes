#include<iostream>
using namespace std;
int main(){
    int arr[]={0,3,1,2,0,4,0,5};
    int j=0;
    for(int i=0;i<8;i++){
       if(arr[i]!=0){
        swap(arr[i],arr[j]);
        j++;
       }
    }
for(int i=0;i<8;i++)
cout<<arr[i]<<" ";
cout<<endl;
}