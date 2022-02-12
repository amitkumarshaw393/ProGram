#include<iostream>
#include<algorithm>
#include<unordered_set>
#include<vector>

using namespace std;

int main(void){
    int arr[]={89,24,75,11,23,89}; //Returns the how many elements are common in both the array
    int brr[]={89,2,4};
    int count=0;
    unordered_set<int> uset;
    for(int i=0;i<5;i++)
        uset.insert(arr[i]);
    
    for(int i=0;i<3;i++){
        int key=brr[i];
        if(uset.find(key)!=uset.end())
           { count++;
           uset.erase(key);}
    }
    cout<<count;
}