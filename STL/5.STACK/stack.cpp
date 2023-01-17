#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("gadhe");
    s.push("vilas");
    s.push("sanket");
cout<<"Top element:"<<s.top();
s.pop();
cout<<"\nTop element:"<<s.top();
cout<<"\n size of stack:"<<s.size();
cout<<"\nstack is empty or not:"<<s.empty();
}