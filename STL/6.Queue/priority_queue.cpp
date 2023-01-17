#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> maxi;
    maxi.push(3);
    maxi.push(1);
    maxi.push(0);
    maxi.push(2);
    int n=maxi.size();
    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    priority_queue<int,vector<int>,greater<int>> mini;
    mini.push(0);
    mini.push(2);
    mini.push(1);
    mini.push(3);
    mini.push(4);
    int m=mini.size();
    cout<<endl;
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
cout<<"\nqueue is empty or not:"<<mini.empty();


}
