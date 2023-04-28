#pragma once
using namespace std;

class Shape
{
public:
	void setWidth(int w);
	void setHeight(int h);

protected:
	int width;
	int height;
};

class Rectangle : public Shape {
public:
	int getArea();
};

