#include<iostream>
using namespace std;
int main(){
    int rows;
    cin>>rows;
    for(int i=rows;i>0;i--){
for(int j=0;j<rows;j++){
    if(j<i-1)
    cout<<" ";
    else
    cout<<"*";
}
cout<<"\n";
    }
}