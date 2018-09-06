#include<iostream>
using namespace std;
/*
   *********
    *******
     *****
      ***
       *
*/

int main()
{
 //Find number of rows
  int n=5;
  cout<<"Enter value of rows(n)"<<endl;
  cin>>n;
  int starst=0,starnum=2*n-1;//star start,star number
  // for loop for the rows
   for(int i=0;i<n;i++)
    {
     //For loop for the columns
     for(int j=0;j<2*n;j++)
     {
       if((j>=(starst))&&(starnum>0))
         {cout<<"*";
          starnum--;
         }  
       else
         cout<<" ";
     } 
     starst++;
     starnum=2*(n-i)-3;
     cout<<endl;
    }   
}
