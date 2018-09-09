#include<iostream>
using namespace std;

//addition function
 void addc(int num1,int num2,int &min)
 {//add the numbers
  int sum=num1+num2;
  //find the greatest term
  if((num1<=num2) && (num1<=sum))
  min=num1;
  else if((num2<=num1) && (num2<=sum))
  min=num2;
  else if((sum<=num2) && (sum<=num1))
  min=sum;
 }
int main()
{//find the two numbers from the user
 int num1,num2;
 cout<<"Enter 2 numbers"<<endl;
 cin>>num1>>num2;
 int min=0;
 //add the numbers
 addc(num1,num2,min);
 //display minimum
 cout<<"Minimum:"<<min<<endl;
}
