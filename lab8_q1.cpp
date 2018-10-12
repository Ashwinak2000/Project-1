#include<iostream>
using namespace std;

int add(int arr[100])
{
 	
 int sum=0;
 for(int i=0;i<100;i++)	
 { 
   if(arr[i]>=0)
 	{
 		//add values to sum
	 sum+=arr[i];
    }
   else
   {
   
 	break;
   }
 }
 //return sum
 return sum;
}

int main()
{
 int arr[100];
 int status=0;
 //intialize the string
 for(int i=0;i<100;i++)
 {
  cout<<"Enter Element"<<endl;
  cin>>arr[i];
  cout<<"Do you want to continue(Enter 0 else Enter 1)";
  cin>>status;
  if(status)
     {	
     arr[i+1]=-1;
	 break;
    }
 }
 //call add function and display
cout<<"Sum:"<<add(arr);
 
}
