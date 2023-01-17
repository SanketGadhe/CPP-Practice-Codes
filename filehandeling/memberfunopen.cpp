#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream out;
out.open("country.txt",ios::out);
out<<"India"<<"\n";
out<<"USA"<<"\n";
out.close();
out.open("captial.txt",ios::out);
out<<"delhi"<<"\n";
out<<"america"<<"\n";
out.close();
ifstream in;
in.open("country.txt",ios::in);
char n[80];
cout<<"printing details:\n";
while(in){
in.getline(n,80);
cout<<n<<"\n";
}
in.close();
in.open("capital.txt", ios::in);
char m[80];
cout << "printing details:\n";
while(in)
{
    in.getline(m,80);
    cout << m << "\n";
}
in.close();

}