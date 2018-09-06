#include<iostream>
using namespace std;
/*   
      *
     ***
    *****
   *******
  *********
 ***********
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
  int starpos=n;//position of stars
  for(int i=0;i<2*n+1;i++)
{
 for(int j=0;j<2*n+4;j++)
 {
  if((j>starpos)&&(j<(2*n-starpos+2)))
  cout<<"*";
  else
  cout<<" ";
 }
 if(i>=n)
  starpos++;
 else
  starpos--;
 cout<<endl;
}
}

