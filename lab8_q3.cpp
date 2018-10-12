#include<iostream>
using namespace std;

int min(int arr[],int size,int k)
{//arrange the elements
 int i=0;int temp=0;
 int top=0;
 for(int i=0;i<size;i++)
 {
  for(int j=i;j<size;j++)
  {
  	top=i;
  	if(arr[top]<arr[j])
  	 top=j;
  	 
  }
  temp=arr[i];
  arr[i]=arr[top];
  arr[top]=temp;
 }
 //Return the kth element if the size >k
 if(k<size)
 return arr[size-k-1];
 else
 cout<<"Not enough Array elements";
}

int max(int arr[],int size,int k)
{ //arrange the elements
 int i=0;int temp=0;
 int top=0;
 for(int i=0;i<size;i++)
 {
 	top=i;
  for(int j=i;j<size;j++)
  {
  	if(arr[top]<arr[j])
  	 top=j;
  	 
  }
  temp=arr[i];
  arr[i]=arr[top];
  arr[top]=temp;
 }
  //Return the kth element if the size >k
 if(k<size)
 return arr[k-1];
 else
 cout<<"Not enough Array elements"<<endl;
}

int main()
{  //Populate an array
	int size;
	cout<<"enter the size"<<endl;
	cin>>size;
	int arr[100];
	for(int i=0;i<size;i++)
	{
	cout<<"enter the "<<i+1<<"th element"<<endl;
	cin>>arr[i];
    }
    int k=0;
    cout<<"Enter k"<<endl;
    cin>>k;
    cout<<endl;
    //Call K min and k man functions
    cout<<"k th smallest element is :"<<min(arr,size,k)<<endl;
    cout<<"k th largest element is :"<<max(arr,size,k);
}
