#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>

using namespace std;

int main(void){
    vector<string> strs={"eat","tea","tan","ate","nat","bat"};
    unordered_map<string,vector<string>>umap;
    vector<vector<string>>ans;

    for(auto x:strs){
        auto temp=x;
        sort(x.begin(),x.end());
        umap[x].push_back(temp);
    }

   

    for(auto x:umap){
        ans.push_back(x.second);
    }

 
    //Print Vector inside a vector
    for(auto x:ans){
        for(auto y:x){
            cout<<y<<" ";
        }
    }

   



}