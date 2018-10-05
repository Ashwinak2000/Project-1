#include<iostream>
using namespace std;

// finds the factorial
int fac(int number)
{ 
	if(number>0)
	{ number--;
	 return (number+1)*fac(number);	
    }
	else
	return 1;
}

int main()
{   //Find the number
	int number=0;
	cout<<"Factorial of which number?"<<endl;
	cin>>number;
	//Call the fac function
    int fact=fac(number);
    cout<<fact<<" is "<<number<<"!"<<endl;
}
