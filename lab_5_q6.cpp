#include<iuostream.h>
using namespace std;

int main()
{ //Input year
   int year;
   cout<<"Enter the year"<<endl
   cin>>year;
  //check if it's a leap year
   if((year%4==0)&&((year%400)%4==0))
    cout<<year<<"is a leap year"<<endl;
   else
   cout<<year<<"is not a leap year"<<endl;
} 

