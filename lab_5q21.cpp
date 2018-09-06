#include<iostream>
using namespace std;
/*
     *
    **
   ***
  ****
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
  int starnum=0;//Number of stars
  for(int i=0;i<2*n;i++)
{
  for(int j=0;j<n;j++)
  {
   if(j<starnum)
   cout<<"*";
   else
   cout<<" ";
  }
  if(i<n)
  {starnum++;
  }
  else
  starnum--;
  cout<<endl;
 }
}
