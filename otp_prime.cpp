/*
input: -97 50
output :50

explanation:
largest prime no between -97 to 57
is 47
so abs(-97+47)=50
*/


#include<iostream>
#include<vector>
#include<algorithm>
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
   int m,n;
    vector<int> vs;
    cin>>n>>m;
    
    for( int i = n; i <= m+1; i++ )
    vs.push_back( i );

 vector<int>prime;
 vector<int>noprime;
 for (auto x:vs)
    {
        if (isPrime(x))
        {
            prime.push_back(x);
        }
    }


// sort(prime.begin(),prime.end());
// int first=*prime.begin();
reverse(prime.begin(),prime.end());
int last=*prime.begin();
cout<<abs(n+last);

}
