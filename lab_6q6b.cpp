#include<iostream>
using namespace std;

int oddsum(int f,int s)
{
 int sum=0;
//add odd numbers between f and s
 for(int i=f+1;i<s;i++)
  {if(i%2==1)
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
 cout<<"Odd Sum:"<<oddsum(firstnum,secondnum);
}
