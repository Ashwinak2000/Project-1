#include<iostream>
using namespace std;

int main()
{
	int a,b1,*p;
	char b,*q;
	float f,*r;
	double d,*t;
cout<<sizeof(a)<<sizeof(p)<<endl;
cout<<sizeof(b)<<sizeof(q)<<endl;
cout<<sizeof(f)<<sizeof(r)<<endl;
cout<<sizeof(d)<<sizeof(t)<<endl;

a=1;b1=2;
cout<<a<<b1<<endl;
p=&a;
cout<<*p<<endl;
p=&b1;
cout<<*p<<endl;
}
