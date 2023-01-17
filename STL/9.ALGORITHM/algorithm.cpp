#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> a;
    a.push_back(1);
  a.push_back(3);
  a.push_back(5);
  a.push_back(6);
  a.push_back(2);
  cout<<"searching 7->"<<binary_search(a.begin(),a.end(),7)<<endl;
  cout<<"lower bound 6->"<<lower_bound(a.begin(),a.end(),6)-a.begin()<<endl;
  cout<<"uper bound 6->"<<upper_bound(a.begin(),a.end(),6)-a.begin()<<endl;

int c=6;
int b=9;
cout<<"max:"<<max(c,b)<<endl;
cout<<"min:"<<min(c,b)<<endl;
swap(c,b);
cout<<"after swap c:"<<c<<endl;

string abcd="abcd";
reverse(abcd.begin(),abcd.end());
cout<<"reverse string ="<<abcd;
rotate(a.begin(),a.begin()+1,a.end());
cout<<"\n after rotate:";
for(auto i:a)
cout<<i<<endl;

}