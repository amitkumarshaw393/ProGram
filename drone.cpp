/* 
input : 5
        3 2 4 6 5

output : 3 2
[
2<4 left<right delete right
3 2 6 5
2<6 delete 6
3 2 55
2<5 delete 5
3 2
]
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

 vector<int>ans;
     for(int i=0;i<=vs.size();i++){
         for(int j=0;j<=i;j++){
             if(vs[j]<vs[j+1]){
             int max=vs[j+1];
             auto temp=find(vs.begin(),vs.end(),max);
             auto index=distance (vs.begin (), temp); 
             vs.erase(vs.begin()+index); 
         }
         }
     }
for(auto x:vs){
    cout<<x<<" ";
}
}
