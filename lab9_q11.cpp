#include<iostream>
using namespace std;

void strcpy(char* p,char str[])
{ int i=0;
	
	while(*(p+i)!='\0')
	{
		str[i]=*(p+i);
		i++;
	}
}

int strcmp(char* q,char*p)
{
	int i=0;
	while(*(p+i)!='\0')
	{
		if(*(p+i)!=*(q+i))
		return 0;
	}
	return 1;
}

int strlen(char* p)
{ int i=0;
	while(*(p+i)!='\0')
	 i++;
	 return i;
}

char* strcat(char* p,char* q,char str[])
{
	int i=0,j=0;
		while(*(p+i)!='\0')
	{
		str[i]=*(p+i);
		i++;
	}
		while(*(q+j)!=0)
	{
		str[i+j]=*(q+j);
		j++;
	}
}

int strchr(char* p,char c)
{ int i=0;
	while(*(p+i)!='\0')
	 {
	 if(*(p+i)==c)
	 {
	 	return 1;
	 }
    }
  return 0;
}

int strshr(char* p, char sub[])
{
	int size1=strlen(p);
	int size2=strlen(sub);
	int flag=0;
	for(int i=0;i<size1;i++)
	{ flag=0;
		if(*(p+i)==sub[0])
		{
		for(int j=0;j<size2;j++)
		  if(*(p+i+j)!=sub[j])
		 { 
		    flag=1;
			break;
	     }
	     if(flag==0)
	     return 1;
	    }
	    
	}
	return 0;
}

int main()
{
	char arr[20];
	char subarr[20];
	char catarr[40];
	cout<<"enter string and substring"<<endl;
	cin>>arr>>subarr;
	strcpy(arr,catarr);
	cout<<strcmp(arr,catarr)<<endl;
	cout<<strlen(arr)<<endl;
	cout<<strchr(arr,subarr[1])<<endl;
	strcat(arr,subarr,catarr);
	cout<<strshr(arr,subarr)<<endl;
	
}
