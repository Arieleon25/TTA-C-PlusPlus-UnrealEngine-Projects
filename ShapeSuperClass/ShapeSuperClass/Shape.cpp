#include <iostream>
#include "Shape.h"


int Rectangle::getArea() const {
	return width * height;
}

int Triangle::getArea() const {
	return base * height;
}

int Circle::getArea() const {
	return radius * radius;
}

