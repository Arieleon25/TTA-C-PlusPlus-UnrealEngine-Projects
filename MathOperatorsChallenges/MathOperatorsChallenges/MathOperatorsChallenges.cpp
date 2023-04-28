#include <iostream>
using namespace std;

int main()
{
    //Operators Challenge

    int A;
    int B;
    cout << "Write number A: ";
    cin >> A;
    cout << "Write number B: ";
    cin >> B;

    cout << "A + B is: ";
    cout << A + B << endl;

    cout << "A - B is: ";
    cout << A - B << endl;

    cout << "A * B is: ";
    cout << A * B << endl;

    cout << "A / B is: ";
    cout << A / B << endl;

    //cout << "A ++ is: ";
    //cout << ++A << endl;

    //Comparison Operators Challenge

    if (A == B)
    {
        cout << "A and B are equal" << endl;
    }

    if (A > B)
    {
        cout << "A is higher than B" << endl;
    }

    if (A != B)
    {
        cout << "A and B are not equal" << endl;
    }

    if (A <= B)
    {
        cout << "A is less or equal to B" << endl;
    }

    //more operators challenge
    int C;

    cout << "Write number C: ";
    cin >> C;

    //C += A;

    //cout << C << endl;

    //C &= B;

    //cout << C << endl;

    //C <<= 10;

    //cout << C << endl;

    //Logical operators challenge

    if (A > 20 && C < 10)
    {
        cout << "A is higher than 20 AND C is lower than 10" << endl;
    }

    if (A > 100 || C > 100)
    {
        cout << "A or C are higher than 100" << endl;
    }

    if (!(A > 20 && C < 10))
    {
        cout << "A is lower than 20 AND C is higher than 10" << endl;
    }

    return 0;
}