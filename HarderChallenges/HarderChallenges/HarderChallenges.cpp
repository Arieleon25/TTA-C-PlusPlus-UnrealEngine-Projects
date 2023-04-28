#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	//Multi line code comments challenge

	//GETLINE() function challenge

	string input;
	cout << "Enter you full name: ";
	getline(cin, input);
	cout << "Your name is: " << input << endl << endl;

	//Math functions challenge

	cout << max(5, 10) << endl; //Find the highest value of x and y

	cout << sqrt(64) << endl; //square root

	cout << round(2.6) << endl; // rounds a number

	cout << log(2) << endl; // natural logarithm

	cout << pow(2, 6) << endl; // returns x to the power of y

	//Consitional statements challenge

	int A;
	int B;

	cout << "Enter a number A: ";
	cin >> A;

	cout << "Enter a number B: ";
	cin >> B;

	if (A > B)
	{
		cout << "A is higher than B" << endl;
	}
	else if (A < B)
	{
		cout << "A is lower than B" << endl;
	}
	else
	{
		cout << "A and B are the same" << endl;
	}

	int day = 2;
	switch (day)
	{
	case 1:
		cout << "Monday" << endl;
		break;

	case 2:
		cout << "Tuesday" << endl;
		break;

	case 3:
		cout << "Wednesday" << endl;
		break;

	case 4:
		cout << "Thursday" << endl;
		break;

	case 5:
		cout << "Friday" << endl;
		break;

	case 6:
		cout << "Saturday" << endl;
		break;

	case 7:
		cout << "Sunday" << endl;
		break;
	}

	// While Loop Challenge

	int C;
	int D;

	cout << "Enter a number C: ";
	cin >> C;

	cout << "Enter a number D: ";
	cin >> D;

	while (C <= D)
	{
		cout << C + 5 << endl;
		break;
	}


	while (C >= D)
	{
		cout << C + 5 << endl;
		continue;
	}

	// Do/While Loop Challenge

	do
	{
		cout << C << endl;
		C += 5;
	} while (C <= D);

	// For loop challenge

	for (int i = 0; i < 6; i++)
	{
		cout << i << endl;
	}

	// Array challenge

	string anime[4] = {"Dragon Ball Z", "Naruto", "One Piece", "Inuyasha"};
	cout << anime[0] << endl;

	// Array loop challenge

	for (int j = 0; j < 4; j++)
	{
		cout << anime[j] << endl;
	}

	// Referenece Variable Challenge

	string food = "Sushi";
	string &meal = food;

	cout << food << endl;
	cout << meal << endl;


	return 0;
}