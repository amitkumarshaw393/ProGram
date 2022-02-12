#include<iostream>
#include<vector>
#include<algorithm>

#include<unordered_map>
using namespace std;


int first(vector<int> arr){
unordered_map<int,int> umap;
    for(int i=0;i<arr.size();i++){
        umap[arr[i]]++;
    }
    int k;
     for(int i=0;i<arr.size();i++){
       int key=arr[i];
       auto temp=umap.find(key);
       if(temp->second>1)
           return i+1;  //Returns the index of the element which is the First Repeating Element
       
    }
return -1;
}

int main(){
    vector<int> arr{1,5,3,4,3,5,6};
//    vector<int> arr{1,3,4,4,5,5,6};
    cout<<first(arr);
return 0;
}