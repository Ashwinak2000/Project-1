#include<iostream>
using namespace std;

int main()
{ //Declare a Double variable length
   double length;
   cout<<"Enter length in centimeter"<<endl; 
  //Input length in Centimeter
   cin>>length;
  //Display
   cout<<"Length in Centimeter is:"<<length<<endl;
  //Convert length into Meter
   length=length/100;
  //Display
   cout<<"Length in Meter is:"<<length<<endl;
  //Convert length into Kilometer
   length=length/1000;
  //Display
   cout<<"Length in Kilometer is:"<<length<<endl;
return 0;
}
