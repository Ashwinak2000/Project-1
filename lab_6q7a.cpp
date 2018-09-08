#include<iostream>
using namespace std;

char toUpper(char c)
{ //check if it is lower case
  if(c>96&&c<123)
   {//Lower case conversion 
    c=c-32;
   }
  else cout<<"The character is not in lowercase"<<endl;
  return c;
}
int main()
{//Input character
 char c;
 cout<<"Enter lowercase letter"<<endl;
 cin>>c;
//Display and conversion
 c=toUpper(c);
 cout<<"Uppercase letter is:"<<c<<endl;
}
