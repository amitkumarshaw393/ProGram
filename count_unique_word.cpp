/*
input :i love to swim and i like to trave abroad

output: 6 [6 are unique words]
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include <sstream>
#include<unordered_map>
using namespace std;

int main(void){
     string s;
     getline(cin,s);
    vector<string> vs;
    istringstream ss(s);
    while(getline(ss,s,' ')){
        vs.push_back(s);
    }
unordered_map<string,int>mp;
for(auto x:vs){
    mp[x]++;
}
int count=0;
for(auto x:mp){
    if(x.second==1){
        count++;
    }
}
cout<<count;

}