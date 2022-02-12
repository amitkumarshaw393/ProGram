/*                                                                                                                                                                                                                                                                                                                            
input: 3 
       as3gAsd

output: dv6jDvg [3 is added to ascii value of every character]
*/                                                                                                                                                                                                                                                                                                                                  


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void){
    int key;
    string text;
    vector<char> vs;
    cin>>key>>text;
    for(int i=0;i<text.length();i++){
        vs.push_back(text[i]);
    }
    
for(auto x:vs){
    char c=key+int(x);
    cout<<c;
}

};