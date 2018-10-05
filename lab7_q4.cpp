#include <iostream>
using namespace std;

int sum(int number,int sum1)
{
 if(number>0)
 {
  sum1+=number;
  number--;
  sum(number,sum1);	
 }
 else
 {
 	return sum1;
 }
}

int main()
{
	// find base and power
	int number,sum1=0;
	cout<<"Enter the number upto which summation must be done"<<endl;
	cin>>number;
    //call sum function
    cout<<sum(number,sum1);
    
}
