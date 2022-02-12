#include<iostream>
#include<map>
#include<algorithm>
#include<vector>

//Program to Check 2 array are equal or Not

using namespace std;

int main(void){
int A[] = {1,2,5};
int B[] = {2,4,15};
int n=3;

vector<int> a,b;
for(int i=0;i<n;i++){
    a.push_back(A[i]);
}
for(int i=0;i<n;i++){
    b.push_back(B[i]);
}


map<int,int> mp1,mp2;

for(auto x:a){
    mp1[x]++;
}
for(auto x:b){
    mp2[x]++;
}

 if (mp1 == mp2)
       cout << "Both maps are  equal." << endl;
else
cout<<"Not Equal";
}

