/*
Input:
5
45 65 21 12 1

output: 45+65=110 [sum of 2 largest value]
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

    int count=0;
    int max1=*max_element(vs.begin(),vs.end());  //Dinding the 1st Max Element in Vector

    auto temp=find(vs.begin(),vs.end(),max1); //Getting the Iterator of the 1st Max element
    auto index=distance (vs.begin (), temp); //Finding the distance of Iterator from the First to get the index
    vs.erase(vs.begin()+index); //After getting the index deleting the 1st Max Element

    int max2=*max_element(vs.begin(),vs.end()); //Now again Finding 2nd Max Element 

  

    cout<<max1+max2; //Adding them both
}