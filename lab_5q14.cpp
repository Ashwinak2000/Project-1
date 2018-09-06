#include<iostream>
using namespace std;
/*
   *****
    ****
     ***
      **
       *
*/
int main()
{
 //Find number of rows
  int n=5;
  cout<<"Enter value of rows(n)"<<endl;
  cin>>n;
 // for loop for the rows
  for(int i=0;i<n;i++)
    {
     //For loop for the columns
     for(int j=0;j<n;j++)
     {
       if(i>j)
       cout<<" ";
       else
       cout<<"*";
     } 
     cout<<endl;
    }   
}
