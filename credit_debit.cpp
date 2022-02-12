/*
input: OqPputLE 
output: 2  [Oq and ut here the consonents are after the vowel]
*/


#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;
 

int main(void){
string s1="AEIOUaeiou";
string s2="qwrtypsdfghjklzxcvbnmQWRTYPSDFGHJKLZXCVBNM";
string s="OqPputLE";

unordered_map<char,int> vowel;
for(int i=0;i<s1.length();i++){
    vowel[s1[i]]++;
}
unordered_map<char,int> consonent;
for(int i=0;i<s2.length();i++){
    consonent[s2[i]]++;
}
int count=0;
for(int i=0;i<s.length();i++){
    char c=s[i];
    if(vowel.find(c)!=vowel.end()){
        char c2=s[i+1];
        
        if(consonent.find(c2)!=consonent.end()){
            count++;
            
        }
    }
}
cout<<count;

}