#include<iostream>
using namespace std;

int evensum(int f,int s)
{
 int sum=0;
//add even numbers between f and s
 for(int i=f+1;i<s;i++)
  {if(i%2==0)
   { 
    sum+=i;
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
 cout<<"Even Sum:"<<evensum(firstnum,secondnum);
}
