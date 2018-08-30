#include<iostream>
using namespace std;

int main()
{ //input a number
   int a;
   cout<<"Enter the number"<<endl;
   cin>>a;
  //check if it is positive
   if(a>0)
    cout<<a<<"is positive"<<endl;
  // check if negative
   else if(a<0)
    cout<<a<<"is negative"<<endl;
  //check if zero 
   else
    cout<<a<<"is zero"<<endl;
 
}
