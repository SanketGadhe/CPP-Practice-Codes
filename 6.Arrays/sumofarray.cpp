#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> ans){
int s=0;
int e=ans.size()-1;
while(s<=e){
    swap(ans[s],ans[e]);
    s++;
    e--;
}
return ans;


}
vector<int> sum(vector<int> a,vector<int> b){
    vector<int> ans;
    int carry=0;
    int sum;
    int i=a.size()-1;
int j=b.size()-1;
    while(i>=0&&j>=0){
        int val1=a[i];
        int val2=b[j];
        sum=val1+val2+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
i--;
j--;
    }
while(i>=0){
    sum=carry+a[i];
    carry=sum/10;
    sum=sum%10;
    ans.push_back(sum);
    i--;
}
while(j>=0){
    sum=carry+a[j];
    carry=sum/10;
    sum=sum%10;
    ans.push_back(sum);
    j--;
}
while(carry!=0){
sum=carry;
carry=sum/10;
sum=sum%10;
ans.push_back(sum);
}
return reverse(ans);

}
int main(){
   vector<int> a={2,3,4,6};
    vector<int> b={4};
    vector<int> ans=sum(a,b);
   
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
}