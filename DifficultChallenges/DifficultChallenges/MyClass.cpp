#include "MyClass.h"

MyClass::MyClass() {
	
	m_value = 0;

	cout << m_value << endl;
}

void MyChild :: myOtherFunction() {

	cout << "some content in another class. \n";

}

void MyGrandChild::myNextFunction() {

	cout << "some next content in another class. \n";
}
