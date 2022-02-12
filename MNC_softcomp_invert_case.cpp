/* 
Input : 
bowANDarrow

output: BOWandARROW 
[Invert The Case ]

*/

#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
 
int main(void)
{
    string s;
    getline(cin,s);
 
   
    // Conversion according to ASCII values
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            // Convert lowercase to uppercase
            s[i] = s[i] - 32;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            // Convert uppercase to lowercase
            s[i] = s[i] + 32;
    }
 
    cout << s;
    
}