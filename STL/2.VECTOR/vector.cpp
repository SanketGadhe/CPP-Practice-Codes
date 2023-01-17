#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v;
//or
vector<int>a(5,1);
for(int i:a){
    cout<<i;
}
cout<<endl;
//copying one into another
vector<int>last(a);
for(int i:last){
    cout<<i;
}
cout<<endl;
cout<<v.capacity()<<endl;
v.push_back(1);
v.push_back(2);
cout<<v.at(1)<<endl;
cout<<v.at(0)<<endl;
cout<<v.size()<<endl;
v.push_back(3);
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
cout<<v.at(2)<<endl;
v.pop_back();
cout<<"size before clear:"<<v.size()<<endl;
v.clear();
cout<<"size after vector clear;"<<v.size()<<endl;
cout<<"capacity of clear vector:"<<v.capacity()<<endl;
}