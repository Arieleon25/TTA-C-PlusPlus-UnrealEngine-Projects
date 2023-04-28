#include <iostream>
using namespace std;

int main()
{
    // Hello World Challenge
    cout << "Hello World!\n\n";

    // Output Challenge
    cout << "I'm learning C++\n\n";

    // Variables Challenge

    char letra = 'A';

    int num = 10;

    double numDoub = 5.543;

    bool Trigger = true;

    string word = "Sup"; 

    cout << letra << ", " << num << ", " << numDoub << ", " << Trigger << ", " << word << endl << endl;

    // Constants Challenge

    const int ConstNum = 25;

    cout << ConstNum << endl << endl;

    // User input Challenge

    string userInput;
    cout << "Write a name: ";
    cin >> userInput;
    cout << "Hello " + userInput << endl << endl;

    // float Challenge

    float fnum = 6.25;
    cout << fnum << endl << endl;

    //String Challenge

    string sent1 = "This is the result of ";
    string sent2 = "my string challenge!";
    string sentfull = sent1 + sent2;

    cout << sentfull << endl << endl;

    //String Function Challenge

    cout << sentfull.length() << endl;
    cout << sentfull[2] << endl;

    sentfull[31] = 'F';

    cout << sentfull << endl << endl;



    return 0;
}
