#include<iostream>
using namespace std;

//tax Displaying function
 void tax_display(float cst,float unit,float taxrt,float sales_tax,float deduction)
 {
  //Display
 cout<<"cost:"<<cst<<"units:"<<unit<<"tax rate:"<<taxrt<<endl;
 cout<<"sales tax:"<<sales_tax<<"total Deduction:"<<deduction<<endl;
 }
 
int main()
{//find units,cost and rate from the user
 float cst1,unit1,taxrt1;
 float sales_tax1,deduction1;
 cout<<"Enter cost,number of units and tax rates(in %),sales_tax and deduction"<<endl;
 cin>>cst1>>unit1>>taxrt1>>sales_tax1>>deduction1;
 tax_display(cst1,unit1,taxrt1,sales_tax1,deduction1);

}
