#include<iostream>
using namespace std;
int max(int A[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(A[i]>max)
        max=A[i];
    }
    return max;
}
int min(int A[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(A[i]<min)
       min=A[i];
    }
    return min;
}
int main(){
    int size;
    cin>>size;
    int A[100];
    for(int i=0;i<size;i++){
        cin>>A[i];
    }
    cout<<"Maximum no in array="<<max(A,size);
    cout<<"\nMinimum no in array="<<min(A,size);

}