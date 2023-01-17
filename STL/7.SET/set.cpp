#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>a;
    a.insert(0);
    a.insert(5);
    a.insert(2);
    a.insert(1);
    a.insert(1);
    a.insert(0);
    a.insert(3);
    a.insert(4);
    a.insert(4);
    for(auto i:a)
    cout<<i<<endl;
set<int>::iterator it=a.begin();
it++;
a.erase(it);
for(auto i:a)
cout<<i<<endl;
cout<<"\n 6 is ppresent or not:"<<a.count(6)<<endl;
set<int>::iterator itr=a.find(4);
for(auto it=itr;it!=a.end();it++)
cout<<*it;

    

}