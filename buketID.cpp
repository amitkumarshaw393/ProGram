/*
input:
4
43 345 20 987

output: 7 12 2 24 [4+3=7 3+4+5=12 and so on] 
*/



#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include <numeric> 
using namespace std;

int main(void){
vector<int>input;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int a;
    cin>>a;
    input.push_back(a);
}
vector<int>sum;
for(auto x:input){
    vector<int>temp;
    int d=x;
    for(; d; d/=10)
    temp.push_back( d%10 );
    reverse(temp.begin(),temp.end());

int data=accumulate(temp.begin(),temp.end(),0);
sum.push_back(data);

}
for(auto x:sum){
    cout<<x<<" ";
}
}