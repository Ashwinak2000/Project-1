#include<iostream>
using namespace std;

int evensqsum(int f,int s)
{
 int sum=0;
//add  square of even numbers between f and s
 for(int i=f+1;i<s;i++)
  {if(i%2==0)
   { 
    sum+=(i*i);
   }
  }
 return sum;
}


int main()
{
 //Input the numbers first num and second num
 int firstnum,secondnum;
 cout<<"enter the two numbers"<<endl;
 cin>>firstnum>>secondnum;
 //display
 cout<<"Even Square Sum:"<<evensqsum(firstnum,secondnum);
}
