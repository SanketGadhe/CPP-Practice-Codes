#include<iostream>
using namespace std;
int main(){
    int arr[]={23,12,4,19,7,1};
    int n=6,count=0;
    bool swapped=false;
    for(int i=0;i<n-1;i++){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
        swapped=true;
        count++;
     }
  
    if(swapped==false)
    break;
    }

}
cout<<count<<endl;
for(int i=0;i<6;i++)
cout<<arr[i]<<" ";
}