#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="gadhe";
    m[5]="sanket";
    m[2]="vilas";
    m.insert({13,"archana"});
    cout<<"before erase"<<endl;
    for(auto i:m)
    cout<<i.first<<" "<<i.second<<endl;

    cout<<"\nFinding 15 in map->"<<m.count(15);
    m.erase(13);
    cout<<"\nafter erase:\n";
    for(auto i:m)
    cout<<i.first<<" "<<i.second<<endl;
    auto it=m.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<(*i).second<<endl;
    }



}