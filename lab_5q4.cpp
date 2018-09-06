#include<iostream>
using namespace std;
/*
    *****        *******
    ** **        **   ** 
    * * *        * * * *
    ** **        *  *  *  
    *****        * * * *
                 **   **
                 ******* 
*/

int main()
{
//Find number of rows
  int n=5;
  cout<<"Enter value of rows(n)"<<endl;
  cin>>n;
  int starpos=0;//Star position
  for(int i=0;i<n;i++)
  {
   for(int j=0;j<n;j++)
   {
   if(i==0||i==n-1)
    cout<<"*";
   else
    {
     if(j==0||j==n-1)
     cout<<"*";
     else if(j==starpos||j==(n-starpos-1))
     cout<<"*";
     else
     cout<<" ";
    }
   }
  if(i<(n-(n%2))/2)
   starpos++;
  else
   starpos--;
   cout<<endl;
  }
  
}
