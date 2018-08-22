#include<iostream>
using namespace std;

 int main()
{
 //Declare variables for days,years,weeks, remaining days
  int day,year,week, rem_days;
 //Input number of days
  cout<<"Enter Number of Remaining Days"<<endl;
  cin>>day;
 //Convert days into years,weeks and remaining days
  year=day/365;
  week=(day-365*year)/7;
  rem_days=(day-365*year-7*week);
 //Display
  cout<<"This is the same as: "<<year<<"years "<<week<<" weeks and "<<rem_days<<" remaining days"<<endl;
  return 0; 
}
