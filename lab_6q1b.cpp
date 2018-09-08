#include<iostream>
using namespace std;

//tax calculating function
 void tax_deduct(float cst,float unit,float taxrt,float &sales_tax,float &deduction)
 {//Find sales tax
  float sales_tax=cst*unit*taxrt;
  slaes_tax/=100.0;
  //Find Deduction
  float deduction=sales_tax+cst;
 
 }
 
int main()
{//find units,cost and rate from the user
 float cst,unit,taxrt;
 cout<<"Enter cost,number of units and tax rates(in %)"<<endl;
 cin>>cst>>unit>>taxrt;
 float sales_tax,deduction;
 tax_deduct(cst,unit,taxrt,sales_tax,deduction);
 //Display
 cout<<"sales tax:"<<sales_tax<<"total Deduction:"<<deduction<<endl;
}
