/*
input:
4 3
3 5 10 
1 5 2
9 2 12
40 0 16

output:
1 0 2

exp:
1(1 is the min value in 3,1,9,40) 
0(0 is the min value in 5,5,2,0)
2(2 is the min value in 10,2,12,16)
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;
  

int main(void){
   int n,m;
    vector<int> vs;
    cin>>n>>m;
    for(int i=0;i<n*m;i++){
        int data;
        cin>>data;
        vs.push_back(data);
    }
vector<int>ans;

for(int i=0;i<m;i++){
    vector<int>minval;
   for(int j=i;j<vs.size();j=j+m){
    minval.push_back(vs[j]);
   }
   int min=*min_element(minval.begin(),minval.end());
    minval.clear();
    ans.push_back(min);
}

for(auto x:ans){
    cout<<x<<" ";
}
}
