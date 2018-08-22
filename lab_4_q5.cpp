#include<iostream>
using namespace std;

int main()
{ 
  //Declare variables for the three angles
   int ang1,ang2,ang3;
  //Input the two angles 
   cout<<"Enter the 2 angles of the triangle(Each angle must be less than 90)"<<endl;
   cin>>ang1>>ang2;  
  //Compute the third angle
   ang3=180-(ang1+ang2);
  //Display
   cout<<"the third angle is: "<<ang3<<endl; 
  return 0;
}
