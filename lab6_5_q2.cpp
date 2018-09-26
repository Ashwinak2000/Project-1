#include<iostream>
using namespace std;

//function for option 1
int calcopt_1(int shoe_cost,int shoes_sold,int working_hours)
{
 int result=600;
 return result;	
}

//function for opttion 2
float calcopt_2(int shoe_cost,float shoes_sold,int working_hours)
{
 float result=7*working_hours+shoes_sold*shoe_cost/10.0;
 return result;	
}

//function for option 3
int calcopt_3(int shoe_cost,int shoes_sold,int working_hours)
{
 int result=0.2*shoes_sold*shoe_cost+20*shoes_sold;
 return result;	
}

//calculator function
int calc(int shoe_cost,int shoes_sold,int working_hours)
{
 int pay_1,pay_2,pay_3;
  pay_1=calcopt_1(shoe_cost,shoes_sold,working_hours);
  pay_2=calcopt_2(shoe_cost,shoes_sold,working_hours);
  pay_3=calcopt_3(shoe_cost,shoes_sold,working_hours);
  
  if((pay_1>pay_2)&&(pay_1>pay_3))	
  return 1;
  
  if((pay_2>pay_1)&&(pay_2>pay_3))	
  return 2;
  
  if((pay_3>pay_2)&&(pay_3>pay_1))	
  return 3;
}
int main()
{
 int shoe_cost=225;
 int weekly_shoes_sold;
 int week_working_hour=40;
 //find number of shoes sold
 cout<<"enter shoe sold that week"<<endl;
 cin>>weekly_shoes_sold;
 //best option display
 cout<<"Best option is option:"<<calc(shoe_cost,weekly_shoes_sold,week_working_hour);
 
 	
}
