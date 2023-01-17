#include<iostream>
using namespace std;
long long int square_root(int n){
int l=0,h=n;
long long int mid,square,ans;
square=mid*mid;
while(l<=h){
    mid=l+(h-l)/2;
    if(square==n)
    return mid;
    if(square<h){
        ans=mid;
        l=mid+1;
    }
    else
    h=mid-1; 
}
return ans;
}
int main(){
    int n=36;
    cout<<square_root(n);
}