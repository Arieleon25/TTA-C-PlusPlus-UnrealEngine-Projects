#include "Dog.h"
#include <iostream>

void Dog::Shake() {
	cout << "The dogs shakes" << endl;
}

void Dog::Sit() {
	cout << "The dogs sits" << endl;
}

void Dog::LayDown() {
	cout << "The dogs lays down" << endl;
}

void GermanSheperd::GSdog() {

	breed = "German Sheperd";
	color = "Tan with black saddle, sable, solid black or bi-color";
	height = 2;
	weight = 88;

	cout << "Breed: " << breed << endl;
	cout << "Color: " << color << endl;
	cout << "height: " << height << " feet" << endl;
	cout << "weight: " << weight << " pounds" << endl;

	Shake();
	Sit();
	LayDown();
	Protect();
}

void GermanSheperd::Protect() {
	cout << "The dogs protects" << endl;
}

void Hound::Hdog() {

	breed = "Hound";
	color = "Brown";
	height = 2;
	weight = 60;

	cout << "Breed: " << breed << endl;
	cout << "Color: " << color << endl;
	cout << "height: " << height << " feet" << endl;
	cout << "weight: " << weight << " pounds" << endl;

	Shake();
	Sit();
	LayDown();

}