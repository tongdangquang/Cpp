#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void ptb2(double a, double b, double c);
int main()
{
    int a, b, c;
    cout << "nhap a = "; cin >> a;
    cout << "nhap b = "; cin >> b;
    cout << "nhap c = "; cin >> c;

    cout << "giai phuong trinh bac 2: " << "x2 + " << b << "x + " << c << " = 0" << endl;
    ptb2(a, b, c);
}

void ptb2(double a, double b, double c)
{
    if (a != 0)
    {
        double dt = pow(b, 2) - 4*a*c;
        if (dt > 0)
        {
            double x1 = (-b + sqrt(dt))/2*a;
            double x2 = (-b - sqrt(dt))/2*a;
            cout << "tap nghiem cua phuong trinh la: S = {" << x1 << "; " << x2 << "}" << endl;
        }
        else if (dt == 0)
        {
            double x = -b / 2*a;
            cout << "tap nghiem cua phuong trinh la: S = {" << x << "}" << endl;
        }
        else
        {
            cout << "phuong trinh vo nghiem" << endl;
        }
    }
    else 
    {
        cout << "phuong trinh khong xay ra" << endl;
    }
}

