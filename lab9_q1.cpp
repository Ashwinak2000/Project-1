#include<iostream>
using namespace std;

int main()
{ //Intialize the string
 char arr[10];
 cout<<"Enter the string"<<endl;
 cin>>arr;
 char *p=arr;
 int size=0;
 for(int i=0;arr[i]!=0;i++)
 {
 	size++;
 }
 //print string reverse
 for(int i=0;i<size;i++)
  cout<<*(p+size-i-1)<<endl;
}
