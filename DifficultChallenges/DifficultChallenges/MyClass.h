#pragma once
#include <string>
#include <iostream>
using namespace std;

class MyClass
{
public:
	MyClass();

protected:
	int m_value;
};

class MyChild : public MyClass {
public:
	void myOtherFunction();
};

class MyGrandChild : public MyChild {
public:
	void myNextFunction();
};

class allchildClasses : public MyClass, public MyGrandChild {

};
