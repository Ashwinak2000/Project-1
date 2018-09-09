#include<iostream>
using namespace std;

//tax calculating function
 float taxcalc(float &cst,float &unit,float &taxrt)
 {
  //find units,cost and rate from the user
  cout<<"Enter cost,number of units and tax rates(in %)"<<endl;
  cin>>cst>>unit>>taxrt;
  float tax=cst*unit*taxrt;
  tax/=100;
  return tax;
 }
int main()
{ float cst1,unit1,taxrt1;
 //Display tax payed
 cout<<"tax payed:"<<taxcalc(cst1,unit1,taxrt1)<<endl;
}
