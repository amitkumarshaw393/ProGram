/*                                                                                                                                                                                                                                                                                                                            
input: 3521 2452 1352 
       1522

output: dv6jDvg [gives o/p smallest number in thousand place , largest number is hundered place and so on]
*/                                                                                                                                                                                                                                                                                                                                  


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void){
    int first,second,third;
    cin>>first>>second>>third;
    vector<int> one,two,three,result;

for(; first; first/=10)
one.push_back( first%10 );

for(; second; second/=10)
two.push_back( second%10 );

for(; third; third/=10)
three.push_back( third%10 );

reverse(one.begin(),one.end());
reverse(two.begin(),two.end());
reverse(three.begin(),three.end());

vector<int> vs;
vector<int>a;
for(int i=0;i<4;i+=2){
      vs.push_back(one[i]);
    vs.push_back(two[i]);
    vs.push_back(three[i]);
    int min=*min_element(vs.begin(),vs.end());
    vs.clear();
    a.push_back(min);

}
vector<int> vs2;
vector<int>b;
for(int j=1;j<=4;j=j+2){
    vs2.push_back(one[j]);
    vs2.push_back(two[j]);
    vs2.push_back(three[j]);
    int max=*max_element(vs2.begin(),vs2.end());
    vs2.clear();
   b.push_back(max); 
}

vector<int>answer;
answer.push_back(a[0]);
answer.push_back(b[0]);
answer.push_back(a[1]);
answer.push_back(b[1]);
for(auto x:answer){
    cout<<x;
}
}