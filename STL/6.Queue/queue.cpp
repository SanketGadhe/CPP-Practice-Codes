#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> s;
    s.push("gadhe");
     s.push("vilas");
      s.push("sanket");
      cout<<"\nelement at top:"<<s.front();
      s.pop();
      cout<<"\nelement at top:"<<s.front();
      cout<<"\nsize of queue:"<<s.size();
      cout<<"\nqueue is empty or not:"<<s.empty();
      cout<<"\nelement at end:"<<s.back();
}