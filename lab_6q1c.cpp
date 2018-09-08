#include<iostream>
using namespace std;

//tax Displaying function
 void tax_display(float cst,float unit,float taxrt,float sales_tax,float deduction)
 {
  //Display
 cout<<"cost:"<<cst<<"units:"<<units<<"tax rate:"<<taxrt<<endl;
 cout<<"sales tax:"<<sales_tax<<"total Deduction:"<<deduction<<endl;
 }
 
int main()
{//find units,cost and rate from the user
 float cst,unit,taxrt;
 float sales_tax,deduction;
 cout<<"Enter cost,number of units and tax rates(in %),sales_tax and deduction"<<endl;
 cin>>cst>>unit>>taxrt>>sales_tax>>deduction;
 tax_display(cst,unit,taxrt,sales_tax,deduction);

}
