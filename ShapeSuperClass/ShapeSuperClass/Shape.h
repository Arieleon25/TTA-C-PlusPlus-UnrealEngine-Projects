#pragma once
#include<string>
#include<cmath>
using namespace std;

class Shape
{
public:
	string color = "Green";
	virtual int getArea() const = 0;
};

class Rectangle : public Shape {
public:
	Rectangle(int w, int h) : width(w), height(h) {}
	int getArea() const;
	
protected:
	int height;
	int width;
};

class Triangle : public Shape {
public:
	Triangle(int b, int h) : base(b), height(h) {}
	int getArea() const;

protected:
	int height;
	int base;
};

class Circle : public Shape {
public:
	Circle(int r) : radius(r) {}
	int getArea() const;

protected:
	int radius;
};
