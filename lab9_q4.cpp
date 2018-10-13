#include<iostream>
using namespace std;

int Mystrlen(char* p)
{ //Find string length
	int size=0;
	while(*p!=NULL)
	{
	size++;
	p=p+1;
    }
	return size;
}

 int main()
 { //Populate string
   char c[10];
   cout<<"enter the text"<<endl;
   cin>>c;
   //Display
   cout<<Mystrlen(c);
   
 }
