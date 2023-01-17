#include<iostream>
using namespace std;

int main(){
    int i,B[6],count,flag=0,C[9];
    i=6;
    
int A[6]={3,5,5,3,3,1};
int size=0;
for(int i=0;i<6;i++){
    int ad=0;
    for (int i=0;i<size;i++){
        if (A[i]==B[i]){
            ad=1;
            break;
        }
    }
    B[size]=A[i];
    size++;


}

for (int i=0;i<size;i++){
    cout<<B[i]<<" ";
}
cout<<(1^2^3);


/*
    while{
        count=0;
        for(int k=0;k<i;k++){
            if(j==A[k]){
                count++;
            }
        }
        B[j]=count;
        cout<<B[j]<<" ";
    }
    cout<<endl;
    for(int j=1;j<6;j++){
     
        for(int k=1;k<6;k++){
            if(B[j]!=0){
            if(B[j]==B[k])
            flag=1;}
        }
        C[j]=flag;
        cout<<flag<<" ";
    }
    cout<<endl<<flag;
    for(int j=1;j<6;j++){
        if(C[j]>1){
            flag=2;
        }
        else 
        flag=3;
    }
    if(flag==3)
    cout<<"True";
    else 
    cout<<"false";
    return 0;*/
}