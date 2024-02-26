#include <iostream>
#include "easy.h"
using namespace std;

void itc_name()
{
    cout << "Vlad ";
}
void itc_fio()
{
    cout << "Ruzhkov ";
    itc_name();
    cout << "Vladimirovich";
}

void itc_abs(int num)
{
    if (num > 0)
    {
        cout << num ;
    }
    else
    {
        cout << num * -1;
    }

}

void itc_fabs(double num1)
{
    if (num1 < 0 )
    {
        cout << num1 * -1;
    }
    if (num1 > 0)
    {
        cout << num1;
    }
    if (num1 == 0)
    {
        cout << "0";
    }
}
