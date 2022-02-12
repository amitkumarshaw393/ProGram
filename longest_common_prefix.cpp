#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

string longestCommonPrefix(vector<string> strs){

int count,min=1000;
    string str;
    for(int i=0;i<strs.size();i++){
        int len=strs[i].length();
        if(len<min){
            min=len;
            str=strs[i];
        }
    }
    for(int i=0;i<min;i++){
        for(int j=0;j<strs.size();j++){
            if(strs[j][i]!=str[i])
                 return str.substr(0,count);
        }
        count++;
    }
    return str.substr(0,count);
}

int main(void){

    string word;
    vector<string> strs;
    for(int i=0;i<3;i++){
        cin>>word;
        strs.push_back(word);
    }
    cout<<longestCommonPrefix(strs);
    
}