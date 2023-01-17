#include<iostream>
using namespace std;
int main(){
    float a,b,ans;
    cout<<"Input a and b:";
    cin>>a>>b;
    char op;
    cout<<"Input Operator";
    cin>>op;
    switch(op){
        case('+'):
            ans=a+b;
            cout<<ans;
            break;
           case('-'):
           ans=a-b;
           cout<<ans;
           break;
           case('*'):
           ans=a*b;
           cout<<ans;
           break;
           case('/'):
           ans=a/b;
           cout<<ans;
           break;
    

           default:
           cout<<"Invalid Operator";
           break;
           }
           
return 0;
}
