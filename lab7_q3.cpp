#include <iostream>
using namespace std;

int print(int upper,int tot)
{ 
	if(upper>=1)
	{ //print limit -variable +1 if it is even
	if((tot-upper+1)%2==0)
	{
		cout<<tot-upper+1<<"\t";
		upper--;
	
	return print(upper,tot);
	}
	else
	{
		upper--;
		return print(upper,tot);
	}
	}
	else
	{
		return 1;
	}
}

int main()
{
	// find base and power
	int upper=0,a;
	cout<<"Enter the number upto which the numbers must be displayed"<<endl;
	cin>>upper;
	a=upper;
    //call print function
    print(a,upper);
}
