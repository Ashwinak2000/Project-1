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
 cout<<"Enter a letter"<<endl;
 cin>>c;
 if(c>64&&c<91)
 {
  c=toLower(c);
  cout<<"Lowercase letter"<<c<<endl;
 }
 else if(c>96&&c<123)
 {
  c=toUpper(c);
    cout<<"Uppercase letter"<<c<<endl;
 }
 else
 cout<<"Letter is not entered"<<endl;
}
