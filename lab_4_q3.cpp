#include<iostream>
using namespace std;

int main()
{
 //Declare variables for storing temperature in Celsius and Farenheit;
  float celsius,farenheit;
 //Input temperature in Farenheit
  cout<<"Enter temperature in Farenheit"<<endl;
  cin>>farenheit;
 //Display
  cout<<"temperature in Farenheit: "<<farenheit<<endl;
 //Convert farenheit into celsius
  celsius=((farenheit-32)*5)/9;
  cout<<"temperature in Celsius: "<<celsius<<endl;
return 0;
}
