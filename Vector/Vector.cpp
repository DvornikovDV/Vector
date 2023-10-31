// Дворников Даниил
#include "Vector_class.h"

// Pаскомментировать строку ниже, чтобы отключить assert()
//#define NDEBUG
#include <cassert>

using namespace std;

// Погрешность вычислений для проверки работы программы
const float eps = 1e-4;

int main()
{
    {
        Vector A(4.1, 5.4);
        A.scalar_multiply(2.13);
        assert(fabs(A.get_X() - 8.733) < eps && fabs(A.get_Y() - 11.502) < eps);
        
        Vector B(8.033, 11.002);
        A.dif_v(B);
        assert(fabs(A.get_X() - 0.7) < eps && fabs(A.get_Y() - 0.5) < eps);

        A.add_v(B);
        assert(fabs(A.get_X() - 8.733) < eps && fabs(A.get_Y() - 11.502) < eps);

        assert(fabs(B.angle_OX() - 53.865324) < eps);

        assert(fabs(B.angle_OY() - 36.134718) < eps);

        assert(fabs(B.length_v() - 13.622521) < eps);
    }

    Vector Ab(4.1, 5.4);
    Vector* A = new Vector();

    // разыменование
    A->set_X(4);
    A->set_Y(5);

    A->scalar_multiply(4.5);

    cout << A->get_X() << endl << A->get_Y() << endl << Ab.data_to_str() << endl;

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