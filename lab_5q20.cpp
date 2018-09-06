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
  if(starnum>=j)
  cout<<"*";
  else
  cout<<" ";
 }
 if(starnum>n-i)
  starnum--;
  else
  starnum++;
 cout<<endl;
}
}

