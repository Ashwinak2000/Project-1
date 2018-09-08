#include<iostream>
using namespace std;

char toLower(char c)
{ //check if it is lower case
  if(c>64&&c<91)
   {//Lower case conversion 
    c=c+32;
   }
  else cout<<"The character is not in Uppercase"<<endl;
  return c;
}
 
int main()
{//Input character
 char c;
 cout<<"Enter Uppercase letter"<<endl;
 cin>>c;
 //Display and conversion
 c=toLower(c);
 cout<<"Lowercase letter is:"<<c<<endl;
}
