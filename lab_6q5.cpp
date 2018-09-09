#include<iostream>
using namespace std;

//addition function
 int add2(int num1,int num2)
 {//add the numbers
  int sum=num1+num2;
  //return the result
  return sum;
 }

//addition function
 int add3(int num1,int num2)
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

 int add4(int num1,int num2)
 {//add the numbers
  int sum=num1+num2;
  //return the least term
  if((num1<=num2) && (num1<=sum))
  return num1;
  else if((num2<=num1) && (num2<=sum))
  return num2;
  else if((sum<=num2) && (sum<=num1))
  return sum;
 }
int main()
{//find the two numbers from the user
 int num1,num2,max,min;
 cout<<"Enter 2 numbers"<<endl;
 cin>>num1>>num2;
int choice;
//find the choice
cout<<"Enter 2-add 3-to add and find maximum 4- to add and find minimum"<<endl;
cin>>choice;

if(choice==2)
{  //display sum
 cout<<"sum:"<<add2(num1,num2)<<endl;
}
else if(choice==3)
{//display maximum  
 max=add3(num1,num2);
 cout<<"Maximum:"<<max<<endl;
}
else if(choice==4)
{  //display the minimum
 int min=add4(num1,num2);
 cout<<"Minimum:"<<min<<endl;
}
else
{cout<<"incorrect choice"<<endl;}

}
