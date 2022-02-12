/* 
Input : 
alphaadida

output: print an integer representing
the count of the product tags that occurs
only once in the sale sequence

*/

#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
 
int main(void){
  string s;
    getline(cin,s);

    unordered_map<char,int>mp;
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
    }
    for(auto x:mp){
        if(x.second==1){
            cout<<x.first<<" "<<x.second<<endl;
        }
    }
}
    
