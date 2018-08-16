// include library
#include <iostream>
using namespace std;
int main()
{
//Variable Defintion
int a=1;
char b='2';
float c=2.007;
double d=2.01;
bool e=0;
//find size and its contents
cout<<"size of char b:"<<sizeof(b)<<"byte"<<" contents of a"<<a<<endl;
cout<<"size of int a:"<<sizeof(a)<<"bytes"<<" contents of b"<<b<<endl;
cout<<"size of float c:"<<sizeof(c)<<"bytes"<<" contents of c"<<c<<endl;
cout<<"size of double d:"<<sizeof(d)<<"bytes"<<" contents of d"<<d<<endl;
cout<<"size of bool e:"<<sizeof(e)<<"bytes"<<" contents of e"<<e<<endl;
return 0;
}
