#include <iostream>
#include "Dog.h"
#include "OOPdogs.h"

int main()
{
    Dog dog;

    //Dog Class behavior
    dog.Shake();

    cout << endl;


    //Dog: German Shepard object
    GermanSheperd gs;

    gs.GSdog();

    cout << endl;

    //Dog: Hound object
    Hound hdog;
    
    cout << endl;

    hdog.Hdog();

    return 0;
    
}

