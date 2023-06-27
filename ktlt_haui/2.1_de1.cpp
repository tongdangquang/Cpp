#include <iostream>
#include <stdio.h>
#include <math.h>

// cau a;
// ham nhap 3 canh a, b, c cua tam giac
void nhap(float &a, float &b, float &c) // su dung truyen tham chieu
{
    printf ("Nhap 3 canh cua tam giac.\n");
    printf ("Nhap canh a = ");
    scanf ("%f", &a);
    printf ("Nhap canh b = ");
    scanf ("%f", &b);
    printf ("Nhap canh c = ");
    scanf ("%f", &c);
}

// cau b;
// ham tinh chu vi
float chuvi(float a, float b, float c)
{
    float cv = a + b + c;
    return cv;
}

// cau c;
// ham tinh dien tich
float dientich(float a, float b, float c)
{
    float p = chuvi(a, b, c)/ 2;
    float dt = sqrt(p*(p - a)*(p - b)*(p - c));
    return dt;
}

// cau d;
// ham tinh gia tri bieu thuc F(a, b, c, k);
float tinh_F(float a, float b, float c, int k)
{
    float F = 2020.0;
    float Q = dientich (a, b, c);
    float p = 1.0;
    for (int i = 1; i <= k; i++)
    {
        p = p * Q;
        F = F + (1.0/p);
    }
    return F;
}

// cau e;
int main ()
{
    float a, b, c;
    int k;
    std::string str (30, '-'); // bien str kieu string dung de gian cach cac dong
    nhap(a, b, c);
    printf ("%s\n", str.c_str());

    float cv = chuvi(a, b, c);
    printf ("Chu vi cua tam giac la: %f\n", cv);
    printf ("%s\n", str.c_str());

    float dt = dientich (a, b, c);
    printf ("Dien tich cua tam giac la: %f\n", dt);
    printf ("%s\n", str.c_str());

    printf ("Nhap so nguyen k = ");
    scanf ("%d", &k);
    printf ("%s\n", str.c_str());

    float F = tinh_F (a, b, c, k);
    printf ("Gia tri cua bieu thuc F(a, b, c, k) = %f\n", F);
    printf ("%s\n", str.c_str());
    return 0;
}