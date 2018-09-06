#include<iostream>
using namespace std;
/*
   *********
    *     *
     *   *
      * *
       *
*/
int main()
{
 //Find number of rows
  int n=5;
  cout<<"Enter value of rows(n)"<<endl;
  cin>>n;
  int starst=1;//star start number
  // for loop for the rows
   for(int i=0;i<n;i++)
    {
     //For loop for the columns
     for(int j=0;j<2*n;j++)
     {  if(i!=0)
       {
        if((j==(starst))||(j==(2*n-starst)))
         {
          cout<<"*";
         }  
        else
         cout<<" ";
       }
       else 
      {
       if(j!=0)
       cout<<"*";
       else
       cout<<" ";
      }
     } 
     starst++;
     cout<<endl;
    }   
}
