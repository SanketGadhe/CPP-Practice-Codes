#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> a;
    a.push_back(2);
    a.push_front(1);
    for(int i:a)
    cout<<i<<" ";
    cout<<endl;
a.pop_back();
for(int i:a)
    cout<<i<<" ";
 a.erase(a.begin());
    for(int i:a)
    cout<<i<<" ";
}