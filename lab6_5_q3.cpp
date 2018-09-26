#include<iostream>
using namespace std;

int main()
{
 int num=36;//this is the number whose square is the required number to be found
long int sqnum=num*num;
long int sumnum=50;//sumnum is the number upto which the summation occurs
 //loop to check for the needed number
 while(1)
 {  //check if sqnum is less than the sum upto sumnum
 	if(sqnum>(sumnum*(sumnum+1)/2))
 	{//loop to check if for some sumnum sqnum=summation upto sumnum
 	 while(sqnum>(sumnum*(sumnum+1)/2))
 	 {
 	  sumnum++;
	 }
	 if(sqnum==(sumnum*(sumnum+1)/2))
	 {
	  cout<<"the required number is:"<<sqnum<<endl;
	  break;
     }
	}
	 if(sqnum==(sumnum*(sumnum+1)/2))
	 {
	  cout<<"the required number is:"<<sqnum<<endl;
	  break;
     }
	
 	num++;
    sqnum=num*num;
 }
 
}
