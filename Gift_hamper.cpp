/*
input:
6
60 7 8 10 250 730

output:
266   [the sum is equal to 1605 which is not a perfect cube
        so 266 need to be added in 1605 to make it a perfect cube]

*/




#include<iostream>
#include<vector>
#include<cmath>
#include <numeric> 
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
    int sum=0;
    for(auto x:vs){
        sum+=x;
    }
float a=cbrt(sum);
int b=a;
if(a!=b){
    int cube=1+cbrt(sum);
    int nearest_cube=pow(cube,3);
    cout<<nearest_cube-sum;
}else{
    cout<<"Yes";
}

}