#include <iostream>
#include <conio.h>
using namespace std;

void nhap(int &n, float &x)
{
    do
    {
        printf ("Nhap so nguyen duong n = ");
        scanf ("%d", &n);
        if (n < 0)
        {
            printf ("Nhap lai n voi dieu kien n nguyen duong!");
        }
    } while (n < 0);
    
    printf ("Nhap so thuc x = ");
    scanf ("%f", &x);
}

float tinh_F(int n, float x)
{
    if (n >= 1 && x > 1)
    {
        float F = 1;
        for (int i = 1; i <= n; i++)
        {
            F += (x + i)/(n * i);
        }
        return F;
    }
    
    else 
    {
        float F;
        float p = 1.0;
        for (int i = 1; i <= 5; i++)
        {
            p *= n;
        }
        F = p + abs(x);
        return F;
    }
}

int main ()
{
    int n;
    float x;
    nhap(n, x);
    printf ("Gia tri cua F(x, n) = %f\n", tinh_F(n, x));
}