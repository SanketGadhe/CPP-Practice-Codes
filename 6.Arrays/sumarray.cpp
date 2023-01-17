#include<iostream>
using namespace std;
int sum(int A[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=A[i];
    }
    return sum;
}
int main(){
    int size;
    int A[100];
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>A[i];
    }
    cout<<"sum of arrays:"<<sum(A,size);

}