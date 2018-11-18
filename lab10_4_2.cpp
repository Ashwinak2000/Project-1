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
		float length,breadth;
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
		 
	void print()
		 {
		 	p1.print();
		 	p2.print();
		 	p3.print();
		 	p4.print();
		 }
		 //find side length
	void side_len()
		 { 
		    //finds length
		 	length=sqrt((p1.get_x()-p2.get_x())*(p1.get_x()-p2.get_x())+(p1.get_y()-p2.get_y())*(p1.get_y()-p2.get_y()));
		    //finds breadth
		 	breadth=sqrt((p3.get_x()-p2.get_x())*(p3.get_x()-p2.get_x())+(p3.get_y()-p2.get_y())*(p3.get_y()-p2.get_y()));
	     }
		
	 float area_comp()
	 {
	 	return length*breadth;
	 }
	 
	 float perimeter_comp()
	 {
	 	return 2*(length+breadth);
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
	r1.side_len();
	r2.side_len();
	
	if(r1.area_comp()>=r2.area_comp())
	cout<<"Rectangle 1 has greater area\n";
	else
	cout<<"Rectangle 2 has greater area\n";
	
	if(r1.perimeter_comp()>=r2.perimeter_comp())
	cout<<"Rectangle 1 has greater perimeter\n";
	else
	cout<<"Rectangle 2 has greater perimeter\n";
	
	
}
