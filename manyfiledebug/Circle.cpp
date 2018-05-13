#include"Circle.h"
#include<iostream>
using namespace std;

Circle::Circle()
{
	this->r=5.0;
}

Circle::Circle(double R)
{
	this->r=R;
}

double Circle::Area()
{
	return 3.14*r*r;
}

void Circle::display()
{
	cout<<"Area=  "<<Area()<<endl;
}
