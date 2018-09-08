#include<iostream>
using namespace std;

//addition function
 int add(int num1,int num2)
 {//add the numbers
  int sum=num1+num2;
  //return the result
  return sum;
 }
int main()
{//find the two numbers from the user
 int num1,num2;
 cout<<"Enter 2 numbers"<<endl;
 cin>>num1>>num2;
 //display sum
 cout<<"sum:"<<add(num1,num2)<<endl;
}
