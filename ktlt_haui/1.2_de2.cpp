#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>
using namespace std;

// câu a;
void cau_a(int &n)
{
    printf ("nhap so nguyen: ");
    scanf ("%d", &n);
}
void cau_a2(float &x)
{
    printf ("nhap so thuc: ");
    scanf ("%f", &x);
}

// câu b;
float cau_b(int n, float x)
{
    float F = 0;
    float p = 1.0;
    float q = 1.0;
    for (int i = 1; i <= n; i++)
    {
        p *= x;
        q *= (-1.0);
        F += q * p;
    }
    return F;
}

// câu c;
float cau_c(int n, float x)
{
    float S = abs(n) + sin(x)*sin(x);
    return S;
}

// câu d;
float cau_d (int n, float x)
{
    float P;
    if (n > 0 && n % 2 == 0)
    {
        P = cau_b(n, x);
    }
    else
    {
        P = cau_c(n, x);
    }
    return P;
}

// câu e;
int main ()
{
    int m;
    float y;
    float K;
    string str(30, '-');
    cau_a(m);
    cau_a2(y);
    printf ("Gia tri cua F(m, y) = %f\n", cau_b(m, y));
    printf ("%s\n", str.c_str());
    printf ("Gia tri cua S(m, y) = %f\n", cau_c(m, y));
    printf ("%s\n", str.c_str());
    printf ("Gia tri cua P(m, y) = %f\n", cau_d(m, y));
    printf ("%s\n", str.c_str());
    K = (cau_b(m, y) * cau_c(m, y)) / (cau_d(m, y));
    printf ("Gia tri cua K = %f\n", K);
}