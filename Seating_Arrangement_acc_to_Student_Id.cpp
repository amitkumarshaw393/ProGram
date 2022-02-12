/* 
Input : 
6
6 9 10 4 2 11

output: 2 6 10 4 9 11s  
[First print numbers at odd position then even position ]

*/

#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
 
int main(void){
    int n,t;
    vector<int>vs;
    cin>>n;
    vector <int>v;
    for(int i=0;i<n;i++){
        cin>>t;
        vs.push_back(t);
    }
    vector<int>odd;
    for(int i=0;i<vs.size();i=i+2){
        odd.push_back(vs[i]);
    }
    vector<int>even;
    for(int i=1;i<vs.size();i=i+2){
        even.push_back(vs[i]);
    }
    sort(odd.begin(),odd.end());
    sort(even.begin(),even.end());
    for(auto x:odd)
    cout<<x<<" ";

    for(auto x:even)
    cout<<x<<" ";

}
    
