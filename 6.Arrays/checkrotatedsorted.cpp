#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int> arr){
    int n=arr.size();
    int count=0;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[n-1]>arr[0])
    count++;
    return count<=1;
}
int main(){

vector<int> arr;
arr.push_back(3);
arr.push_back(4);
arr.push_back(5);
arr.push_back(1);
arr.push_back(2);
arr.push_back(3);
if(check(arr)){
    cout<<"array is sorted and rotated";
    }
else
cout<<"array is not sorted rotated";
return 0;
}