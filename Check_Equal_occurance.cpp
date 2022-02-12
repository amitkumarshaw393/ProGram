#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<set>

using namespace std;

int main(void){

string s="qweqffew";
map<char,int> mp;
vector<char> v;
for(int i=0;i<s.length();i++){
    v.push_back(s[i]);
}
for(auto x:v){
    mp[x]++;
}
auto temp=mp.begin();
int count=temp->second;

int flg=0;
for(auto x:mp){
    if(x.second==count)
    flg=0;
    else
    {flg=1;
    break;}
}


bool ans=(flg==0)?1:0; //1 if Occurance are equal
cout<<ans;


}