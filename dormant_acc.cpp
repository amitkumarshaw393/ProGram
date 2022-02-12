/*
input : 
6 
-45 40 5 -8 -98 -9

output : 2 [count of Negative integer]
*/



#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void){
    int n;
    vector<int> vs;
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        vs.push_back(data);
    }
    int count=0;
    for(auto x:vs){
        if(x<0){
            count++;
        }
    }
    cout<<count;
}