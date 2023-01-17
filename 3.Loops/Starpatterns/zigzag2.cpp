#include<iostream>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if((i+j)%4==0||(i==2&&j%4==0))
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
}