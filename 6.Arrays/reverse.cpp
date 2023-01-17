#include<iostream>
using namespace std;
#include<math.h>
void print(int A[],int n){
    for(int i=0;i<n;i++){
        cout<<A[i];
         }   
        cout<<endl;
}
void reverse(int A[],int n){
     for(int i=0,j=n-1;j>i;i++,j--){
    swap(A[i],A[j]);
    }
print(A,n);
}
using namespace std;
int main(){
    int size;
    cin>>size;
    int A[100];
    for(int i=0;i<size;i++)
    cin>>A[i];

    cout<<"Printing array:";
    print(A,size);
    cout<<"\nprinting reverse array:";
    reverse(A,size);

   

}