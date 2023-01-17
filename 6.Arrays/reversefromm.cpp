#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> v,int m){
    int e=v.size()-1;
    while(m+1<=e){
       
        swap(v[m],v[e]);
         m++;
        e--;
    }
    
    return v;
}
void print(vector<int> v){
    cout<<"array after reverse from m position is:\n";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(12);
    v.push_back(14);
     v.push_back(15);
      v.push_back(19);
       v.push_back(11);
       cout<<v.size()<<endl;
       int m;
       cout<<"enter the position  from which you want to reverse:";
       cin>>m;
     vector<int>ans=reverse(v,m);
    print(ans);
}