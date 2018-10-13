#include<iostream>
using namespace std;

double* maximum(double* p,int size)
{
	int max=0;
	for(int i=0;i<size;i++)
	{
		if(*(p+max)<*(p+i))
		max=i;
	}
	if(size)
	return (p+max);
	else
	return NULL;
}

int main()
{ 
	double arr[10]={0,0,0,0,0,0,0,0,0,0};
	int size;
	cout<<"Enter array size"<<endl;
	cin>>size;
	
	for(int i=0;i<size;i++)
	{
	cout<<"Enter element"<<i<<endl;
	cin>>arr[i];
    } 
 double* p=maximum(arr,size);
 cout<<*p;
}
