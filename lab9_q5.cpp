#include<iostream>
using namespace std;

int contains(char* p,char* q)
{ //Find sub string in the string
 int size1, size2,flag=1;
  for(int i=0;*(p+i)!='\0';i++)
       size1=i;
  for(int j=0;*(q+j)!='\0';j++)
      size2=j;
   for(int i=0;i<size1;i++)
        {
         if(*(p+i)==*q)
          { flag=1;
          	for(int j=0;j<size2;j++)
          	  {
          	    if(*(p+i+j)!=*(q+j))	
          	    {
          	    	flag=0;
          	    	break;
				}
			  }
			  if(flag)
			  return 1;
		  }
		  
	   } 
	   if(flag)
	   return 0;    
}

 int main()
 { //Populate string
   char c[10]="\0";
   cout<<"enter the text"<<endl;
   cin>>c;
   //find sub text
   char sub[9];
   cout<<"enter text 2"<<endl;
   cin>>sub;
   //Display
   if(contains(c,sub))
   cout<<"substring is contained"<<endl;
   
 }
