/*
input :
5
89 14 5 10 50
2 -> this the the kth element

output: 89 50 [k maximum marks in the list and print in the same order]
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(void){

int n,kth;
cin>>n;

vector<int>v;
for(int i=0;i<n;i++){
        int data;
        cin>>data;
        v.push_back(data);
    }
cin>>kth;
vector<int>order=v;
sort(v.begin(),v.end());
reverse(v.begin(),v.end());

vector<int>ans;
for(int i=0;i<kth;i++){
    ans.push_back(v[i]);
}

map<int,int> mp;
for(auto x:ans){
        mp[x]++;
    }

vector<int>finalans;
for(auto x:order){
        if(mp.find(x)!=mp.end()){
        auto temp=mp.find(x);
        int count=temp->second;
        vector<int>v(count,x);
        finalans.insert(finalans.end(),v.begin(),v.end());
        mp.erase(x);
        }
    }

for(auto x:finalans){
         cout<<x<<" ";
    }

}
