#include<iostream>
using namespace std;

int main()
{
 //intialize 3 variables
   int a,b,c;
   cout<<"Enter the three variables";
   cin>>a>>b>>c; 
 //compare the first two variables and find the greater
   if(a>=b)
 // compare the largest and the third variable
   {
    if(a>=c)
      cout<<a<<"is the largest"<<endl;
    else
      cout<<c<<"is the largest"<<endl;
   }  

   else
   {
       if(b>=c)
        cout<<b<<"is the largest"<<endl;
      else
        cout<<c<<"is the largest"<<endl;
   } 
  return 0;
}
