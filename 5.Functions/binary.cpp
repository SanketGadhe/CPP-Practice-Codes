// #include<iostream>
// using namespace std;
// void binary(int n){
//     int r,A[10],i;
//     i=0;
//     while(n){
//         r=n%2;
//         n/=2;
//         A[i]=r;
//         i++;
//     }

//     for(int j=i-1;j>=0;j--){
//         cout<<A[j];
//     }
// }
// int main(){
// int n;
// cin>>n;
// binary(n);
// }

#include<iostream>
#include<math.h>
using namespace std;
int binary(int n)
{
    int d=0;
    int res=0;
    int i=0;
    while(n!=0)
    {
        d=n&1;
        res=d*pow(10,i)+res;
        n=n>>1;
        i++;
    }
    return res;
}
int main()
{
    int num;
    cin>>num;

    cout<<binary(num);
    return 0;

}
