#include<iostream>
using namespace std;

int max(int arr[])
{ //find the max element
	int max=0;
	int i=0;
	while(arr[i]>=0)
	{
	 if(arr[i]>=max)	
	 {
	 max=arr[i];
    }
	 i++;	
	}
	return max;
}
int min(int arr[])
{{ //find the min element
	int min=arr[0];
	int i=0;
	while(arr[i]>=0)
	{
	 if(arr[i]<min)	
	 {
	 min=arr[i];
    }
	 i++;	
	}
	return min;
}
}
float mean(int arr[])
{
	int sum=0;
	int i=0;
 	while(arr[i]>=0)
	{
	 sum+=arr[i];	
	 i++;	
	}
    int size=0;
    i=0;
   	while(arr[i]>=0)
	{
	 size++;
	 i++;	
	}
	return ((float)sum)/((float)size);
}
int mode(int arr[])
{
	int i=0;
	int size=0;
   	while(arr[i]>=0)
	{
	 size++;
	 i++;	
	}
	int temp;
	int freq[100];
	for(int i=0;i<size;i++)
	{
	 temp=arr[i];
	 for(int j=i;j<size;j++)
	 {
	  if(temp==arr[j])
	  {
	  	freq[j]++;
	  }
	 }
	 freq[size]=-1;
	 return max(freq);
	}
}
int median(int arr[])
{
	int i=0;
    int temp;
    int size=0;
    int top;
   	while(arr[i]>=0)
	{
	 size++;
	 i++;	
	}
	i=0;
	for(int i=0;i<size;i++)
	{
	  for(int j=i;j<size;j++)
	  {
	  	top=i;
	  	if(arr[top]<arr[j])
	  	{
	  	 	top=j;
		}
	  }	
	   temp=arr[top];
	  arr[top]=arr[i];
	  arr[i]=temp;
	  
     }
     if(size%2==0)
    {
		
	top=(arr[((size)/2)-1]+arr[(size/2)])/2;
    }
	else
	{
		top=arr[(size+1)/2-1];
	}
	return top;
}

int main()
{
 int arr[100];
 int status=0;
 //Intialize the array
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
 //call the largest,smallest,median,mean and mode functions
cout<<"Maximum:"<<max(arr)<<endl;
cout<<"Minimum:"<<min(arr)<<endl;
cout<<"Median:"<<median(arr)<<endl;
cout<<"Mean:"<<mean(arr)<<endl;
cout<<"Mode:"<<mode(arr)<<endl;

}
