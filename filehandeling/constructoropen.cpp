#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string w;
    cout<<"Enter content to write:";
    cin>>w;
    ofstream out("help.txt");
    out<<w;
    out.close();
    ifstream in("help.txt");
    char r[30];
    cout<<"showing content of the file\n";
  
    while(in){
        in.getline(r,30);
        cout<<r;
     }
    in.close();
    return 0;

}
