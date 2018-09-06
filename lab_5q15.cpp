#include<iostream>
using namespace std;
/*
  *****
   *  *
    * *
     **
      *
*/

int main()
{
 //Find number of rows
  int n=5;
  cout<<"Enter value of rows(n)"<<endl;
  cin>>n;
 int star=0;//Position of star per row.
 // for loop for the rows
  for(int i=0;i<n;i++)
   {
     //For loop for the columns
     for(int j=0;j<n;j++)
    {
       if(i!=0)
     {
       if(star==j||(j==n-1))
       cout<<"*";
       else
       cout<<" ";
     }
     else
     cout<<"*";
    } 
     cout<<endl;
     star++;
   }   
}
