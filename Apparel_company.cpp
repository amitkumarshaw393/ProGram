/* 
Input : 5 14
        6 5 3 11 10

output: 2 3    [here the values at 2nd and 3rd index value 
                when added gives the target value that is 14 ]

*/

#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
 

int main(void){
    int n,target,t;
    vector<int>vs;
    cin>>n>>target;
    vector <int>v;
    for(int i=0;i<n;i++){
        cin>>t;
        vs.push_back(t);
    }
    for(int i=0;i<vs.size();i++){
        int data=vs[i];
        int diff=target-data;
    for(auto x:vs){
        if(x==diff){
                    auto temp=find(vs.begin(),vs.end(),data); 
                    auto index=distance (vs.begin (), temp);
                    v.push_back(index);
        }
    }
}
    for(auto x:v){
        cout<<x<<" ";
    }

}
    
