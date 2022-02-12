/*
Input : 14523 
output: befcd [give coresponding alphabet mapped to it]

*/




#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(void){
    int n;
    vector<int> vs;
    cin>>n;

// for(int i=0;i<n;i++){
    //     int data;
    //     cin>>data;
    //     vs.push_back(data);
    // }

//If the Number are given in form of digit eg. 541762 the loop below seperate and store it in vector 
for(; n; n/=10)
  vs.push_back( n%10 );


reverse(vs.begin(),vs.end());

map<int,char> mp;
mp.insert(make_pair(0,'a'));
mp.insert(make_pair(1,'b'));
mp.insert(make_pair(2,'c'));
mp.insert(make_pair(3,'d'));
mp.insert(make_pair(4,'e'));
mp.insert(make_pair(5,'f'));
mp.insert(make_pair(6,'g'));
mp.insert(make_pair(7,'h'));
mp.insert(make_pair(8,'i'));
mp.insert(make_pair(9,'j'));

string s="";

for(auto x:vs){
    auto temp=mp.find(x);
    if(mp.find(x)!=mp.end()){
        s=s+temp->second;
    }
}
cout<<s;

}