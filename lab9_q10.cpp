#include<iostream>
using namespace std;

int main()
{
	//Populate string
char str[11];
cout<<"Enter the 10 element string"<<endl;
cin>>str;
//Print string in the pattern
 for(int i=0;i<10;i++)
  {
  for(int j=9-i;j<10;j++)
   cout<<str[j];
  cout<<endl;
 }
}
