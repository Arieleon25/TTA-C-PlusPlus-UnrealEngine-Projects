#include "Animal.h"
#include <iostream>

void Animal::animalSound() {
	cout << "The animal makes a sound \n";
}

void Cat::animalSound() {

	cout << "The cat says: Miau miau \n";
}

void Dog::animalSound() {

	cout << "The dog says: woff woff \n";
}
