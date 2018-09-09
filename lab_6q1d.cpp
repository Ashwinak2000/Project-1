#include<iostream>
using namespace std;

//tax calculating function
 float taxcalc(float &cst1,float &unit1,float &taxrt1)
 {
  //find units,cost and rate from the user
  cout<<"Enter cost,number of units and tax rates(in %)"<<endl;
  cin>>cst1>>unit1>>taxrt1;
  float tax=cst1*unit1*taxrt1;
  tax/=100;
  return tax;
 }
 void tax_deduct(float cst,float unit,float taxrt,float &sales_tax,float &deduction)
 {//Find sales tax
  sales_tax=cst*unit*taxrt;
  sales_tax/=100.0;
  //Find Deduction
  deduction=sales_tax+cst;
 
 }
 
//tax Displaying function
 void tax_display(float cst,float unit,float taxrt,float sales_tax,float deduction)
 {
  //Display
 cout<<"cost:"<<cst<<"units:"<<unit<<"tax rate:"<<taxrt<<endl;
 cout<<"sales tax:"<<sales_tax<<"total Deduction:"<<deduction<<endl;
 }

int main()
{ float cst,unit,taxrt;
 //Display tax payed
 float sales_tax1=taxcalc(cst,unit,taxrt);
 float deduction1;
//calculate deduction
 tax_deduct(cst,unit,taxrt,sales_tax1,deduction1);
//Display the result
 tax_display(cst,unit,taxrt,sales_tax1,deduction1);
}
