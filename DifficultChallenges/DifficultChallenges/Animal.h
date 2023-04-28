#pragma once
using namespace std;
class Animal
{
public:
	void animalSound();
};

class Cat : public Animal {
public:

	void animalSound();
};

class Dog : public Animal {
public:
	void animalSound();
};
