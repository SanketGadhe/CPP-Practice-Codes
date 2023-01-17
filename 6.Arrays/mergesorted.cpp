#include<iostream>
using namespace std;
void merge(int a[],int m, int b[],int n,int c[]){
int i=0,j=0,k=0; 
while(j<m&&k<n){
    if(a[j]<b[k]){
        c[i++]=a[j++];
    }
    else{
    c[i++]=b[k++];
    }
}
while(j<m){
c[i++]=a[j++];
}
while(k<n){
c[i++]=b[k++];
}

}
void print(int c[],int n){
    for(int i=0;i<n;i++){
        cout<<c[i]<<" ";}
    cout<<endl;
}
int main(){
int a[5]={1,3,5,7,9};
int b[4]={2,4,6,8};
int c[]={0};
merge(a,5,b,4,c);
print(c,9);
}

