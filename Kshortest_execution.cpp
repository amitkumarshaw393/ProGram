/*
input:7 5
9 -3 8 -6 -7 18 10

output: 9   [after sorting the list in ASC print the 5th elemnent]
*/


#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int main(void){
    int n,k;
    vector<int> vs;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        vs.push_back(data);
    }
sort(vs.begin(),vs.end());

cout<<vs[k-1];

}