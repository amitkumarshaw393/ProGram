/*
input :5
       1 4 2 6 3
output: 1,(1+4)=5,(1+4+2)=7,(1+4+2+6)=13,(1+4+2+6+3)=16
        so print 1,5,7,13,16
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void){
    int n;
    vector<int> vs;
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        vs.push_back(data);
    }
    vector<int>answer,temp;
    temp=vs;
    int sum=0;
    for(int i=0;i<temp.size();i++){
        for(int j=0;j<=i;j++){
            sum=sum+temp[j];
        }
        answer.push_back(sum);
        sum=0;
    }
    for(auto x:answer){
        cout<<x<<" ";
    }

}