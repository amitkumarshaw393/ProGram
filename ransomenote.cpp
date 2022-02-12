#include<iostream>
#include<map>
#include<algorithm>
#include<vector>

using namespace std;

//The Occurance of Alphabets in Magazine must be Greater or equal to of Occurance of Alphabets in RansomeNote

//eg ransomenote has 2 'a' but magazine has 1 'a' so Magazine cant be constructed using ransomenote

int main(void){
    
string ransomNote="aa",magazine="ab";
map<char,int> ran_mp;
map<char,int> mag_mp;
for(auto x:magazine){
    mag_mp[x]++;
}
for(auto x:ransomNote){
    ran_mp[x]++;
}
vector<int>ans;

for(int i=0;i<ransomNote.length();i++){
 auto r_alp=ran_mp.find(ransomNote[i]);

        auto data=r_alp->first;
        auto y=mag_mp.find(data);
        if(mag_mp.find(data)!=mag_mp.end() && y->second>=r_alp->second){
            ans.push_back(1); //true
        }else{
           ans.push_back(0); //false
        }
}
int one=count(ans.begin(),ans.end(),1);
int ran_size=ransomNote.size();

bool f_ans=(one==ran_size)?true:false;
cout<<f_ans;

}


