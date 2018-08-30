#include<iostream>
using namespace std;
int main()
{
 // printing all even numbers from 1 to 100
 int i=0;
 while(i<100)
 {
  if((++i)%2==0)
   cout<<i;
 }
 return 0;
}
