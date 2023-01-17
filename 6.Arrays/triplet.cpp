#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,3};
    int s=12;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            for(int k=j+1;k<6;k++){
                if(a[i]+a[j]+a[k]==s){
                cout<<a[i];
                cout<<a[j];
                cout<<a[k];
                  cout<<endl;
                }
            }
        }
      
    }
}