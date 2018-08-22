#include<iostream>
using namespace std;

int main()
{
 //Declare variables for storing temperature in Celsius and Farenheit;
  float celsius,farenheit;
 //Input temperature in Celsius
  cout<<"Enter temperature in Celsius"<<endl;
  cin>>celsius;
 //Display
  cout<<"temperature in Celsius: "<<celsius<<endl;
 //Convert celsius into farenheit
  farenheit=(1.8*(celsius)+32);
  cout<<"temperature in Farenheit: "<<farenheit<<endl;
return 0;
}

