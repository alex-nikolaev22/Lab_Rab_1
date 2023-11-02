#include <iostream>
#include <cmath>
#include <clocale>
#include <locale.h>

using namespace std;

// вариант 17: вывести значение составной функции в точках с определенным шагом (цикл и функция, шаг целочисленный)

double CompositeFunction(double xf)
{
    double yf;
    if (xf < -3)
    {
        yf = 1;
    }
    if ((xf >= -3) && (xf < -1))
    {
        yf = -pow((4 - pow((xf + 1), 2)), 0.5);
        // y=-sqrt(4-(x+1)*(x+1));
    }
    if ((xf >= -1) && (xf < 2))
    {
        yf = -2;
    }
    if (xf >= 2)
    {
        yf = xf - 4;
    }
    return (yf);
}
double y,a,b,h,i;
int n;
int main()

{
    //setlocale(LC_ALL, "");
    //setlocale(0, "");
    //setlocale(LC_ALL, "Russian");
    cout << "Vvedite nijnuju granizu ";
    cin >> a;
    cout << "Vvedite verhnuju granizu ";
    cin >> b;
    cout << "Vvedite shag ";
    cin >> h;
    n = (a-b)/h;
    i = a;
    while (i<=b) 
    {
        y = CompositeFunction(i);
        cout << "y(" << i << ") = " << y << endl;
        i=i+h;
    }
    /*for (int i = a; i <= b; i++)
    {
        y = CompositeFunction(i);
        cout << "y(" << i << ")=" << y << endl;
        // endl;
    }*/
}