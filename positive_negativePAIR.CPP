#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>

using namespace std;

int main(void){
     int a[]={11,-4,4,-3,-9,4,-4,-2,1,2,-4,2};
     vector<int>v,ans;
    unordered_map<int,int> mp;

    for(int i=0;i<12;i++){
        if(a[i]<0){
            v.push_back(a[i]);
        }else{
            mp[a[i]]++;
        }
    }

//The above loop is written as Short hand and both works the same
    // for(auto x:a){
    //     if(x<0){
    //         v.push_back(x);
    //     }else{
    //         mp[x]++;
    //     }
    // }

    sort(v.begin(),v.end());
    for(int i=v.size();i>=0;i--){
        int data=abs(v[i]);
        auto temp =mp.find(data);
        if(mp.find(data)!=mp.end() && temp->second>0){
            ans.push_back(v[i]);
            ans.push_back(data);
            mp[data]-=1;
            // temp->second-=1;
        }
    }
for(auto x:ans){
    cout<<x<<" ";
}







}