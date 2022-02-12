/*
input : 541762 5 [ 5 is not to be included in the counting and
                      except 5 there are 5 digits]
output : 5
*/



#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(void){
    int n,given;
    vector<int> vs;
    cin>>n>>given;

//If the Number are given in form of digit eg. 541762 the loop below seperate and store it in vector 
for(; n; n/=10)
  vs.push_back( n%10 );

reverse(vs.begin(),vs.end());
int count=0;
for(auto x:vs){
    if(x!=given)
    count++;
}
cout<<count;
}

