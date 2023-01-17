#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>a;
    a.push_back(12);
    a.push_front(10);
    for(int i:a)
    cout<<i<<" ";
    cout<<endl;
 /*  
a.pop_back();
for(int i:a)
cout<<i<<" ";
a.pop_front
for(int i:a)
cout<<i<<" ";
*/
cout<<"front:"<<a.front()<<endl;
cout<<"back"<<a.back()<<endl;
cout<<"Empty or Not:"<<a.empty()<<endl;
cout<<"size before erase:"<<a.size()<<endl;
a.erase(a.begin(),a.begin()+1);
for(int i:a)
    cout<<i<<" ";

    
    return 0;
 }
 