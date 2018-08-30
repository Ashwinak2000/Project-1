#include<iostream>
using namespace std;
int main()
{
 // Sum of all odd numbers from 1 upto n
 int i=0,n;
 cout<<"enter number n"<<endl;
 cin>>n;
 int sum=0;
 while(i<n)
 { if((i%2)==0)
    sum+=(++i);
 }
 cout<<"summation is:"<<sum<<endl;
 return 0;
}
