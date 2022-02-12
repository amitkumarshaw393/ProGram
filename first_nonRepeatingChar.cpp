#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<set>

using namespace std;

int main(void){

string s="acabb";

unordered_map<char,int> mp;
vector<char> v;

for(int i=0;i<s.length();i++){
    v.push_back(s[i]);
}

for(auto x:v){
    mp[x]++;
}
int index;
for(int i=0;i<v.size();i++){
    char word=v[i];
    auto temp=mp.find(word);
    if(mp.find(word)!=mp.end() && temp->second==1){
        index=i; //If Non Repeating element Found then return it's Index/Position
        break;
        }
        else
        {index=-1; //If there are no Non repeating Element then the Return -1 
        }
        
    }
cout<<index;


}