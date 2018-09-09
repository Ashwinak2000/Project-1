#include<iostream>
using namespace std;

int oddsqsum(int f,int s)
{
 int sum=0;
//add  square of odd numbers between f and s
 for(int i=f+1;i<s;i++)
  {if(i%2==1)
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
 cout<<"Odd Square Sum:"<<oddsqsum(firstnum,secondnum);
}
