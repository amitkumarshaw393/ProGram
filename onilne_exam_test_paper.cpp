/*
Input : 6442
output : P 
[6+4+4+2=16 so print]

Input : 558823
output : D
[5+5+8+8+2+3=31
greater than 26 so
3+1=4
so we print D]
*/

#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
 
int main(void){
    int n;
    cin>>n;
  vector<char>set;
  string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  
  for(int i=0;i<s.length();i++){
      set.push_back(s[i]);
  }

vector<int>result;
  for(; n; n/=10)
  result.push_back( n%10 );

int sum=0;
  for(auto x:result){
      sum+=x;
  }
  if(sum>=1 && sum<=26){
          cout<<set[sum-1];
      }else{
          vector<int>temp;
          for(; sum; sum/=10)
          temp.push_back( sum%10 );
        
        int res=accumulate(temp.begin(),temp.end(),0);
        cout<<set[res-1];
      }
}
