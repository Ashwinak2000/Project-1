#include<iostream>
using namespace std;

int main()
{
	// rates of fruits and number of fruits and amount at hand is found
	int fruit_max=2;
	int a_num=0,b_num=0,m_num=0;
	float apple_rate=1.0;
	float banana_rate=0.5;
	float mango_rate=3.0;
	float cash=2.0;
	//to find the combination for mango,apple and banana
	for(;a_num<fruit_max;a_num++)
	{
		for(;b_num<fruit_max;b_num++)
		{
			for(;m_num<fruit_max;m_num++)
			{
			 //check if the total number of fruit is less than max fruit
			 if(a_num+b_num+m_num<=100)
			 {
			   //check if cost is less than cash
			   if(!((a_num*apple_rate)+(b_num*banana_rate)+(m_num*mango_rate)>cash))
			    {
			    	//display the combination
					cout<<"there are "<<a_num<<" apples "<<b_num<<" bananas and "<<m_num<<" mangoes"<<endl; 
			    }
			 }	
			}
		}
	}
}
