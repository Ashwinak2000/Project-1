#include <iostream>
using namespace std;

int a=0;
int rev(int number)
{ 
 if(number)
 {//find the reverse number
 a=10*a+number%10;
 number/=10;
 rev(number);
 }
 else
 {
 	return a;
 }
}

int main()
{
	// find base and power
	int number;
	cout<<"Enter the number that must be reversed"<<endl;
	cin>>number;
    //call rev function and print
    cout<<rev(number);
    a=0;
}
