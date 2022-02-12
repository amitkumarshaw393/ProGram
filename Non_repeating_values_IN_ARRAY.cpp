#include<iostream>
#include<vector>
#include<algorithm>

#include<unordered_map>
using namespace std;

int main(void){

   unordered_map<int,int> umap;
    vector<int> ar={-1,2,-1,3,4,9,2};
    vector<int> answer;

    for(int i=0;i<ar.size();i++){
        int key=ar[i];
        umap[key]++;
    }

    for(int i=0;i<ar.size();i++){
        int key=ar[i];
        auto temp=umap.find(key);
        if(temp->second==1){
            answer.push_back(key);
           
        }
    }
cout<<"Non Repeating Value are :";
    for(auto x:answer){
        cout<<x<<" ";
    }

}