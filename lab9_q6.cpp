#include<iostream>
using namespace std;

void revstring(char* p)
{ //Find string length
	int size=0;
	while(*(p+size)!=NULL)
	{
	size++;
    }
    //print the Reverse string
	for(int i=size-1;i>=0;i--)
	cout<<*(p+i);	
	cout<<endl<<"is the reversed string";
}

 int main()
 { //Populate string
   char c[10];
   cout<<"enter the text"<<endl;
   cin>>c;
   //call reverse function
  revstring(c);
   
 }
