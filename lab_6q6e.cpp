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

int oddsqsum(int f,int s)
{
 int sum=0;
//add square of odd numbers between f and s
 for(int i=f+1;i<s;i++)
  {if(i%2==1)
   { 
    sum+=(i*i);
   }
  }
 return sum;
}

int evensqsum(int f,int s)
{
 int sum=0;
//add square of even numbers between f and s
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
 int sumEven,sumOdd,sumSquareEven,sumSquareOdd;
 sumEven=evensum(firstnum,secondsum);

 sumOdd=oddsum(firstnum,secondsum);

 sumSquareEven=evensqsum(firstnum,secondnum);

 sumSquareOdd=oddsqsum(firstnum,secondnum);

 cout<<"Even Sum:"<<sumEven;
 cout<<"Odd Sum:"<<sumOdd;
 cout<<"Odd Square Sum:"<<sumSquareodd;
 cout<<"Even Square Sum:"<<sumSquareEven; 

}
