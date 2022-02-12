/*
input:
7 3 6
2 5 1 8 6 9 4

output:
2 1 8 9  
[l=3 and 4=6
print element which are not in range of 3 and 6]


*/


#include<iostream>
#include<vector>

using namespace std;

int main(void){

int n,l,r;
cin>>n>>l>>r;
vector<int>temperature;
for(int i=0;i<n;i++){
    int a;
    cin>>a;
   temperature.push_back(a);
}
vector<int>answer;
for(auto x:temperature){
   if(x>=l && x<=r)
   continue;
   else
   answer.push_back(x);
}
for(auto x:answer)
cout<<x<<" ";






}