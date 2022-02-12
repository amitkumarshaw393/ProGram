/* 
Input : 
find out area of biggest triangle

output: display the area
of largest triangle upto 6 decimal 
place;

*/

#include<iostream>
#include <iomanip>

using namespace std;
 
int main(void){
  double h1,b1,h2,b2;
  double area1,area2;
  cin>>b1>>h1;
  cin>>b2>>h2;

  area1=(b1*h1)/2;
  area2=(b2*h2)/2;
  double largestArea=(area1>area2)?area1:area2;

cout <<fixed;
cout << setprecision(6) <<largestArea ;
}
    
