// Дворников Даниил
#include "Vector_class.h"

using namespace std;

int main()
{
    Vector Ab(4.1, 5.4);
    Vector* A = new Vector();

    // разыменование
    A->set_X(4);
    A->set_Y(5);

    A->scalar_multiply(4.5);

    cout << A->get_X() << endl << A->get_Y() << endl << Ab.to_str() << endl;

    delete A;

    {
        Vector* A;
        A = new Vector[5];// массив объектов

        Vector* Arr[100]{0};//массив из указателей на объекты

        Arr[0] = new Vector();
        Arr[0]->set_X(7);

        A[1].set_X(4);                  
        cout << A[1].get_X() << "\t" << Arr[0]->get_X();

        delete[] A;
    }
}