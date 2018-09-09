#include<iostream>
using namespace std;

//tax calculating function
 void tax_deduct(float cst,float unit,float taxrt,float &sales_tax,float &deduction1)
 {//Find sales tax
  sales_tax=cst*unit*taxrt;
  sales_tax/=100.0;
  //Find Deduction
   deduction1=sales_tax+cst;
 
 }
 
int main()
{//find units,cost and rate from the user
 float cst1,unit1,taxrt1;
 cout<<"Enter cost,number of units and tax rates(in %)"<<endl;
 cin>>cst1>>unit1>>taxrt1;
 float salestax,deduction;
 tax_deduct(cst1,unit1,taxrt1,salestax,deduction);
 //Display
 cout<<"sales tax:"<<salestax<<"total Deduction:"<<deduction<<endl;
}
