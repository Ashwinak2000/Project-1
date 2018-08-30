#include<iostream.h>
using namespace std;

int main()
{//input the number
  int a;
  cout<<"Enter the number"<<endl;
  cin>>a;
 //check if a is divisible by 5 and 11
  if((a%5)&&(a%11))
   cout<<a<<"is divisible by 5 and 11"<<endl;
  else
   cout<<a<<"is not divisible by 5 and 11"<<endl;
}
