#include<iostream>
using namespace std;

//addition function
 void addc(int num1,int num2,int &max)
 {//add the numbers
  sum=num1+num2;
  //find the greatest term
  if((num1>=num2) && (num1>=sum))
  max=num1;
  else if((num2>=num1) && (num2>=sum))
  max=num2;
  else if((sum>=num2) && (sum>=num1))
  max=sum;
 }
int main()
{//find the two numbers from the user
 int num1,num2;
 cout<<"Enter 2 numbers"<<endl;
 cin>>num1>>num2;
 int max=0;
 //add the numbers
 add(num1,num2,max);
 //display maximum
 cout<<"Maximum:"<<max<<endl;
}
