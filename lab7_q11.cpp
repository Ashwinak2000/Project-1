#include<iostream>
using namespace std;

int hcf(int num1,int num2)
{
	if((num1>num2))
	{
	 num1-=num2;
	// cout<<num1<<" "<<num2<<endl;
	 hcf(num1,num2);
	}
	else if(num2>num1)
	{
		num2-=num1;
	//	cout<<num1<<" "<<num2<<endl;
		hcf(num1,num2);
	}
	else
	{
		return num1;
	}
}

int main()
{
	//find the two numbers
	int num1,num2;
	cout<<"enter the 2 numbers"<<endl;
	cin>>num1>>num2;
	cout<<"GCD: "<<hcf(num1,num2);
}
