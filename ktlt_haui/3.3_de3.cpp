#include <iostream>
#include <stdio.h>
#include <cmath>

void nhap(int &n, float &x)
{
    do
    {
        printf ("nhap so nguyen duong n = ");
        scanf ("%d", &n);
        if (n <= 0)
        {
            printf ("nhap lai n voi dieu kien n nguyen duong\n");
        }
    } while (n <= 0);

    printf ("nhap so thuc x = ");
    scanf ("%f", &x);
}

float tinh_F(int n, float x)
{
    float F = fabs(x);
    if (n >= 1 && x > 2)
    {
        float p = 1.0;
        for (int i = 1; i <= n; i++)
        {
            p *= x;
            F += p/i;
        }
        return F + 1.0;
    }
    else 
    {
        float p = 1.0;
        for (int i = 2; i <= 3; i++)
        {
            p *= x;
        }
        return F + p + 2.0*n;
    }
}

int main ()
{
    int n;
    float x;
    nhap(n, x);
    printf ("Gia tri cua F(x, n) = %f\n", tinh_F(n, x));
}