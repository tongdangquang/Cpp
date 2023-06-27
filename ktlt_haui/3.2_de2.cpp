#include <iostream>
#include <stdio.h>

void nhap (int &n, float &x)
{
    do
    {
        printf ("nhap so nguyen duong n = ");
        scanf ("%d", &n);
        if (n <= 0)
        {
            printf ("nhap lai n voi n nguyen duong\n");
        }
    } while (n <= 0);

    printf ("nhap so thuc x = ");
    scanf ("%f", &x);
}

float tinh_F(int n, float x)
{
    if (x > 0 && n >= 1)
    {
        float F = 1.0;
        float p = 1.0;
        for (int i = 1; i <= n; i++)
        {
            p *= x;
            F += p/(i + 1.0);
        }
        return F;
    }
    else 
    {
        float F;
        float p = 1.0;
        for (int i = 1; i <= 3; i++)
        {
            p *= x;
        }
        F = p + 2*n;
        return F;
    }
}

int main()
{
    int n;
    float x;
    nhap(n, x);
    printf ("Gia tri cua F(x, n) = %f", tinh_F (n, x));
}