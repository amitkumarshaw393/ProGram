/*
input: 7
       2 9 5 3 14 80 17
output: 2 5 3 1 7 9 14 80   [first the prime numbers then the non prime]

*/



#include<iostream>
#include<vector>
#include<unordered_map>
#include<cmath>
using namespace std;
 
bool isPrime(int num)
{
    bool isPrime = 1;
    if (num <= 0)
    {
        return 0;
    }
    if (num == 1)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(num); ++i)
    {
        if (num % i == 0)
        {
            isPrime = 0;
        }
    }
    return isPrime;

} 

int main(void){
   int n;
    vector<int> vs;
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        vs.push_back(data);
    }
 vector<int>prime;
 vector<int>noprime;
 for (auto x:vs)
    {
        if (isPrime(x))
        {
            prime.push_back(x);
        }else{
            noprime.push_back(x);
        }
    }
for(auto x:prime){
    cout<<x<<" ";
}for(auto x:noprime){
    cout<<x<<" ";
}

}
=