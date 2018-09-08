#include<iostream>
using namespace std;

//tax calculating function
 float taxcalc(float &cst,float &unit,float &taxrt)
 {
  //find units,cost and rate from the user
  float cst,unit,taxrt;
  cout<<"Enter cost,number of units and tax rates(in %)"<<endl;
  cin>>cst>>unit>>taxrt;
  float tax=cst*unit*taxrt;
  tax/=100;
  return tax;
 }
int main()
{ float cst,unit,taxrt;
 //Display tax payed
 cout<<"tax payed:"<<taxcalc(cst,unit,taxrt)<<endl;
}
