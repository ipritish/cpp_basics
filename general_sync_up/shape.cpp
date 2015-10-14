#include<iostream>

struct Point{
	double x;
	double y;
};
class Shape{
	public : 
		virtual Point center() const=0;
		virtual void move(Point to)=0;
		virtual void draw() const=0;
		virtual void rotate(int angle)=0;
		virtual ~Shape(){};
};
