#include<iostream>
using namespace std;
int sum(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
sum+=i;
    }
    return sum;
}
int main(){
int n;
cin>>n;
cout<<sum(n);
}