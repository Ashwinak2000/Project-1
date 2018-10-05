#include <iostream>
using namespace std;

int fib(int number)
{ int prev=0; 
   if(number>=3)
  { prev=fib(number-2);
  	prev+=fib(number-1);
  	return prev;  	
  }
  else
  return 1;
}

int main()
{
	int a=1,number;
	cout<<"enter the number of the sequence's term"<<endl;
	cin>>number;
	cout<<"the required number is:"<<fib(number);
}

