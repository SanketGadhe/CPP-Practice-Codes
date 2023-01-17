#include<iostream>
using namespace std;
void merge(int arr1[],int m){
    for(int i=0;i<m-1;i++){
        for(int j=i+1;j<m;j++){
            if(arr1[i]>arr1[j])
            swap(arr1[i],arr1[j]);
        }
    }
}
void print(int arr1[])
{
    for(int i=0;i<7;i++)
cout<<arr1[i]<<" ";
cout<<endl;
}
int main(){
    int arr1[]={1,3,4,0,0,0,0};
    int arr2[]={2,3,5,0};
    int j=0;
for(int i=0;i<7;i++){
    if(arr1[i]==0)
    arr1[i]=arr2[j++];
}
merge(arr1,7);
print(arr1);
}