#include <iostream>
#include "Shape.h"

int main()
{
	Shape* s1 = new Rectangle(5,3);
	Shape* s2 = new Triangle(2, 8);
	Shape* s3 = new Circle(20);


	cout << "Area of the rectangle is " << s1->getArea() << endl;
	cout << "Area of the Triangle is " << s2->getArea() << endl;
	cout << "Area of the Circle is " << s3->getArea() << endl;

	cout << "the color of the rectangle is " << s1->color << endl;

}