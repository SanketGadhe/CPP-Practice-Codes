#include<iostrem>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 3 no's:"<<endl;
    cin>>a>>b>>c;
    
    if(a>b){
        if(a>c){
             cout<<"MAX="<<a;
        }
        else{
        cout<<"MAX="<<c;
        }
    }
    else {
 if(b>c){
    cout<<"MAX="<<b;
 }
 else{
    cout<<"MAX="<<c;
 }
    }
return 0;
}