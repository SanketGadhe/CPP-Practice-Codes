#include<iostream>
using namespace std;
void decitohexa(int n){
    char A[10];
    int j=0,x;
    for(int i;n>0;n/=16){
        i=n%16;
         if((i>9)&&(i<16))
        {
         x=65+i-10;
         A[j]=x;  
         cout<<A[j]<<endl; 
        }
        else{
         x=48+i;
        A[j]=x;
        cout<<A[j]<<endl;}
       j++;
    }
    for(int i=j-1;i>=0;i--){
        cout<<A[i];
    }
  
}
int main()
{
    int n;
    cin>>n;
    decitohexa(n);
} 
