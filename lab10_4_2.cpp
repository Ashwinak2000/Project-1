#include<iostream>
using namespace std;
#include<math.h>

class point
{
	private:
		float x,y;
	public:
		point()
		{
		 x=0.0;
		 y=0.0;
		}
		//setter
	     void set_x(float x,float y)
		{
		  this->x=x;
		  this->y=y; 	
		}	
		//getsx
		float get_x()
		{
			return x;
		}
		//getsy
		float get_y()
		{
			return y;
		}
		//print function
	void print()
		{
			cout<<"Coordinate is:("<<x<<", "<<y<<")"<<endl;
		}
};

class rectangle
{
	private:
		point p1,p2,p3,p4;
	public:
	     rectangle()
		 {// set points to (0,0) ,(1,0),(0,1),(1,1)
		 	p1.set_x(0,0);
		 	p2.set_x(1,0);
		 	p3.set_x(0,1);
		 	p4.set_x(1,1);
		 }	
		 
		 rectangle(point p1,point p2)
		 { //sets based on diagonal points
		 	this->p1.set_x(p1.get_x(),p1.get_y());
		 	this->p4.set_x(p2.get_x(),p2.get_y());
		 	this->p2.set_x(p1.get_x(),p2.get_y());
		 	this->p3.set_x(p2.get_x(),p1.get_y());
		 }
		 
		 print()
		 {
		 	p1.print();
		 	p2.print();
		 	p3.print();
		 	p4.print();
		 }
		 //find side length
		 side_len(int i=1)
		 {  if(i==1)
		  { //finds length
		 	return sqrt((p1.get_x()-p2.get_x())*(p1.get_x()-p2.get_x())+(p1.get_y()-p2.get_y())*(p1.get_y()-p2.get_y()));
		  }
		    //finds breadth
		 	if(i==2)
		 	return sqrt((p3.get_x()-p2.get_x())*(p3.get_x()-p2.get_x())+(p3.get_y()-p2.get_y())*(p3.get_y()-p2.get_y()));
		 }
};

int main()
{
	point p1,p2;
	p2.set_x(2.0,3.0);
	p1.print();
	p2.print();
	
	rectangle r1,r2(p1,p2);
	r1.print();
	r2.print();
	
	if(r1.side_len()>=r2.side_len())
	  cout<<"Rectangle 1 has greater length"<<endl;
	else
	  cout<<"Rectangle 2 has greater length"<<endl;
	  
	if(r1.side_len(2)>=r2.side_len(2))
	  cout<<"Rectangle 1 has greater breadth"<<endl;
	else
	  cout<<"Rectangle 2 has greater breadth"<<endl;
	  
	
	
}
