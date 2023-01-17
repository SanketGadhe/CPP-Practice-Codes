#include<iostream>
using namespace std;
void factorial(int n){
 long int fact=1;
for(n;n>0;n--)
fact=fact*n; cout<<"Factorial="<<fact;
}
int main(){
    int n;
    cin>>n;
factorial(n);
}