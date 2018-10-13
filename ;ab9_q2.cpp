#include<iostream>
using namespace std;

void countEven(int* p,int size)
{ //print the even elements
 for(int i=0;i<size;i+=2)
  cout<<*(p+i);
}

int main()
{ //Intialize the array
 int size;
  int arr[100];
  cout<<"Enter size of array"<<endl;
  cin>>size;
  for(int i=0;i<size;i++)
  {
    cout<<"Enter element"<<i+1<<endl;
  	cin>>arr[i];
  }
  countEven(arr,size);
}
