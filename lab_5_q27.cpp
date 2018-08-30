#include<iostream>
using namespace std;
int main()
{
 // Sum of all numbers from 1 upto n
 int i=0,n;
 cout<<"enter number n"<<endl;
 cin>>n;
 int sum=0;
 while(i<n)
 {
  sum+=(++i);
 }
 cout<<"summation is:"<<sum<<endl;
 return 0;
}
