#include<iostream>
using namespace std;

//addition function
 void add(int num1,int num2,int &sum)
 {//add the numbers
  sum=num1+num2;
 }
int main()
{//find the two numbers from the user
 int num1,num2;
 cout<<"Enter 2 numbers"<<endl;
 cin>>num1>>num2;
 int sum=0;
 //add the numbers
 add(num1,num2,sum);
 //display sum
 cout<<"sum:"<<sum<<endl;
}
