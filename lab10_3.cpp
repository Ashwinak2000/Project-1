#include<iostream>
using namespace std;

class rectangle
{
	float length;
	float breadth;
	
	public:
		    float get_length()
		    {//get the length
		    	return length;
			}
			
			float get_breadth()
		    {// get the breadth
		    	return breadth;
			}
			
			void set()
			{// set the length and breadth
				cout<<"enter length"<<endl;
				cin>>length;
				cout<<"enter breadth"<<endl;
				cin>>breadth;
			}
};

int main()
{
	rectangle rect1,rect2;
	rect1.set();
	rect2.set();
	if(rect1.get_breadth()*rect1.get_length()>=rect2.get_breadth()*rect2.get_length())
	 cout<<"Rectangle 1 has greater area"<<endl;
	 else
	 cout<<"Rectangle 2 has greater area"<<endl;
	 
	if(2*(rect1.get_breadth()+rect1.get_length())>=2*(rect2.get_breadth()*rect2.get_length()))
	 cout<<"Rectangle 1 has greater perimeter"<<endl;
	 else
	 cout<<"Rectangle 2 has greater perimeter"<<endl; 
}
