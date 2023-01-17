           #include<iostream>
           using namespace std;
           int main(){
           int side;
           cin>>side;
           for(int i=1;i<=side;i++){
           for(int j=side;j>=i;j--){
           cout<<"*";
           }
           cout<<"\n";
           }
           return 0;
           }


