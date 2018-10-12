#include<iostream>
using namespace std;

merge(int a[],int size1,int b[],int size2,int c[])
{
	for(int i=0;i<size1;i++)
	c[i]=a[i];
	for(int i=0;i<size2;i++)
	c[i+size1]=b[i];
}

int main()
{ //Initalize both strings
	int arr1[100],arr2[100];
	int size1,size2;
	cout<<"enter the size of string and string 2 respectively"<<endl;
	cin>>size1>>size2;
	
	for(int i=0;i<size1;i++)
	 {
	 	cout<<"Enter element :"<<i+1<<endl;
	 	cin>>arr1[i];
	 }
	 cout<<endl;
	for(int i=0;i<size2;i++)
	 {
	 	cout<<"Enter element :"<<i+1<<endl;
	 	cin>>arr2[i];
	 }
//Merge the strings	 
	 int arr3[200];
	 merge(arr1,size1,arr2,size2,arr3);
//Display the result	 
	for(int i=0;i<size1+size2;i++)
	 cout<<arr3[i]<<endl;
	 
}
