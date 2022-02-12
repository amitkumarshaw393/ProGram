/*
input: 43251 3

output: 25143
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(void){
int n,r;
cin>>n>>r;
vector<int> vs;
for(; n; n/=10)
vs.push_back( n%10 );

reverse(vs.begin(),vs.end());
rotate(vs.begin(), vs.begin()+r-1,vs.end()); 
for(auto x:vs)
cout<<x;
}