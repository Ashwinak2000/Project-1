#include <iostream>
using namespace std;

int power(int base,int power_)
{ //check if the power is atleast one
	if(power_>=1)
	{//Decrease the power by 1 and multiply base into the previous result
		power_--;
	return base*power(base,power_);
	}
	else
	{
		return 1;
	}
}

int main()
{
	// find base and power
	int base=0,power1=0;
	int exp;
	cout<<"Enter the number and power it must be raised to"<<endl;
	cin>>base>>power1;
	//call power function
	exp=power(base,power1);
	//print the result
	cout<<"The required exponent is:"<<exp<<endl;
}
