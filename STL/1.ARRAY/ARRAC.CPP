#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4> a={1,2,3,4};
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
    cout<<"\nelement at 2 nd pos->"<<a.at(2);
    cout<<"\nfirst element:"<<a.front();
     cout<<"\nfirst element:"<<a.back();

}
