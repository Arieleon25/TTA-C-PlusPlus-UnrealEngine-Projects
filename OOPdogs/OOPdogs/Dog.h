#pragma once
#include<string>
using namespace std;

class Dog
{
public:
	void Shake();
	void Sit();
	void LayDown();

protected:
	string breed;
	string color;
	int height;
	int weight;
};

class GermanSheperd : public Dog {
public:
	void GSdog();
	void Protect();
};

class Hound : public Dog {
public:
	void Hdog();
};