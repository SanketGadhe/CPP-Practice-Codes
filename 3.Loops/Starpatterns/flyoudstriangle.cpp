#include<iostream>
using namespace std;
int main(){
    int rows,count=1;
    cin>>rows;
    for(int i=0;i<rows;i++){
        for(int j=0;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<"\n";
    }
}