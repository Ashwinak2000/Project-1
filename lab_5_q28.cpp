#include<iostream>
using namespace std;
int main()
{
 // Sum of all even numbers from 1 upto n
 int i=0,n;
 cout<<"enter number n"<<endl;
 cin>>n;
 int sum=0;
 while(i<n)
 { if((i%2)==1)
    sum+=(++i);
 }
 cout<<"summation is:"<<sum<<endl;
 return 0;
}
