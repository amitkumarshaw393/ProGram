/*
input:
39631

output:
93361 

Explanation
interchange 1st and 2nd digit then again 
3rd and 4th digit and so on
for 5th digit as there is no digit to interchange
leave as it is
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void){

int n;
cin>>n;
vector<int>v;
for(; n; n/=10)
  v.push_back( n%10 );


reverse(v.begin(),v.end());

if(v.size()%2==0){
    for(int i=0;i<v.size();i=i+2)
{
    int data=v[i+1]; 
    v[i+1]=v[i]; 
    v[i]=data;
}
}else{
    for(int i=0;i<v.size()-1;i=i+2)
{
    int data=v[i+1]; 
    v[i+1]=v[i]; 
    v[i]=data;
}
}

for(auto x:v){
    cout<<x;
}





}