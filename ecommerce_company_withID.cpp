/*
Input : 6 3
        2 3 4 5 8 10
output :1

returns the position where 3
is present
*/

#include<iostream>
#include<vector>
using namespace std;
 
int main(void){
    int n,id,t;
    vector<int>vs;
    cin>>n>>id;
    
    for(int i=0;i<n;i++){
        cin>>t;
        vs.push_back(t);
    }
    int pos=0;
    for(int i=0;i<vs.size();i++){
        if(vs[i]==id)
        {cout<<i;
        break;}
        else{
            if(id-vs[i]>0){
                pos++;
            }else
               {  
                cout<<pos;
                break;
                }
            }
          
        }
    
}
