#include <iostream>
#include "Vector_class.h"

using namespace std;

int main()
{
    Vector A;
    A.set_X(4);
    A.set_Y(5);

    A.scalar_multiply(4.5);

    cout << A.get_X() << endl << A.get_Y();

}