/* 
input :
6
100 560 23 19 53 20

output:
560 19 [maximum paired with min]
100 20
53 23


input:
7
99 123 77 12 43 8 50

output:
123 8
99 12
77 43
50 0 [if nothing to pair with then insert 0 in second]
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

 vector<pair<int,int>>ans;
      int s=n/2;
     for(int i=0;i<s;i++){
         sort(vs.begin(),vs.end());
         int min=vs[0];
         reverse(vs.begin(),vs.end());
         int max=vs[0];
         vs.pop_back();
         sort(vs.begin(),vs.end());
         vs.pop_back();
         ans.push_back( make_pair(max,min) ); 

         if(vs.size()==1){
            ans.push_back( make_pair(vs[0],0) ); 
         }
     }

for(auto x:ans){
    cout<<x.first<<" "<<x.second<<endl;
}
}
