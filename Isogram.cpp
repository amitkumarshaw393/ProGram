#include<iostream>
#include<map>
#include<algorithm>
#include<vector>

//Isogram means a word in which the letters occur an equal number of times


using namespace std;

int main(void){
    string s="geeks";  
    vector<char> str;
    map<char,int> mp;
    int flg=0;
    for(int i=0;i<s.length();i++)
    {
        str.push_back(s[i]);
     }

    for(auto x:str){
        mp[x]++;
    }

    for(auto x:mp){
        if(x.second>=2)
           flg=1;
    }
    if(flg==0){
        cout<<"1"; //Return true if they occur equal times
    }else
     cout<<"0"; //return false if they dont occcur equal times


//  for(auto x:mp){
//         cout<<x.first<<" "<<x.second<<endl;
//     }

}