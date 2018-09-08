#include<iostream>
using namespace std;

//addition function
 int addc(int num1,int num2)
 {//add the numbers
  int sum=num1+num2;
  //return the greatest term
  if((num1>=num2) && (num1>=sum))
  return num1;
  else if((num2>=num1) && (num2>=sum))
  return num2;
  else if((sum>=num2) && (sum>=num1))
  return sum;
 }
int main()
{//find the two numbers from the user
 int num1,num2;
 cout<<"Enter 2 numbers"<<endl;
 cin>>num1>>num2;
 //display the maximum
 int max=addc(num1,num2);
 cout<<"Maximum:"<<max<<endl;
}
