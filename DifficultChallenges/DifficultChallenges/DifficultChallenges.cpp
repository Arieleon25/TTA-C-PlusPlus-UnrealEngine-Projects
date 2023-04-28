#include <iostream>
#include "MyClass.h"
#include "Shape.h"
#include "DifficultChallenges.h"
#include "Animal.h"

using namespace std;

void myFunction()
{
    cout << "this is my function\n\n";
}

void add(int x, int y)
{
    int result = x + y;
    cout << result << endl << endl;
}

int sub(int x, int y)
{
    int result2 = x - y;
    return result2;
}

void swapNums(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

void print(int num)
{
    cout << "The integer value is: " << num << endl;
}

void print(double num)
{
    cout << "The double value is: " << num << endl;
}

void print(string str)
{
    cout << "The string value is: " << str << endl;
}

int main()
{
    // & operator challenge. Getting Memory Address

    string food = "Sushi";

    cout << &food << endl << endl;

    // Pointer Challenge. the POINTER Stores Memory Address as its value 
    
    string* pointer = &food;
    
    cout << food << endl; //Output the value of food

    cout << &food << endl; // output the memory address

    cout << pointer << endl << endl; // output memory address with the pointer

    // Dereference Challenge.

    cout << *pointer << endl << endl; // output value with the pointer

    // Main() function challenge

    myFunction();

    //Function Challenge

    myFunction(); //function without argument

    add(5, 10); // Function with multiple parameters

    cout << sub(5, 2) << endl; // return keyword insde a function

    int num1 = 6;
    int num2 = 3;
    swapNums(num1, num2); //Swaps variables or passing a reference to a function
    cout << num1 << " " << num2 << endl;

    //Function overloading
    print(5);
    print(5.5687);
    print("Hello World!");

    cout << endl;
      
    //Class Challenge

    MyClass obj1;

    // Inheritance challenge

    Rectangle rect;

    rect.setWidth(5);
    rect.setHeight(7);

    cout << "Area of rectangle: " << rect.getArea() << endl; //Injeritance

    //Multilevel inheritance

    MyGrandChild gChild;

    allchildClasses allChild;

    allChild.myNextFunction();

    allChild.myOtherFunction();

    // Polymorphism Challenge

    Animal animal;
    Cat cat;
    Dog dog;

    animal.animalSound();

    dog.animalSound();

    cat.animalSound();

    //Exception Challenge

    try {
        int age = 15;
        if (age >= 18) {
            cout << "Access granted - you are old enough\n";
        }
        else {
            throw(age);
        }
            
    }
    catch (int myNum) {
        cout << "Access denied - You must be at least 18 years old \n";
    }

    return 0;
}