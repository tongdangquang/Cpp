#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

// Câu a: Tính P(x)
float tinh_P(float x)
{
    float y = 1.0;
    // tính x mũ 5
    for (int i = 1; i <= 5; i++)
    {
        y *= x;
    }
    float P = exp(abs(x)) + y + sqrt (x*x + 1.0);
    return P;
}


// Câu b: hoán đổi giá trị
void hoandoi(int &n, int &m)
{
    int t = n;
    n = m;
    m = t; 
}


// Câu c: Hàm tính S(x, n)
float tinh_S(float x, int n)
{
    float S;
    // vì x trong căn bậc 2 nên biểu thức có nghĩa khi x >= 0
    if (x >= 0)
    {
        S = 100.0;
        float p = 1.0;
        for (int i = 1; i <= n; i++)
        {
            p *= x; // tính x mũ n
            S += sqrt(p)/(n + i);
        }
        return S;
    }
    // trường hợp biểu thức vô nghĩa là x < 0
    else
    {
        return S = 1;
    }
}


int main ()
{
    float a;
    int b, c;
    cout << "Nhap a = ";
    cin >> a;
    cout << "Nhap b = ";
    cin >> b;
    cout << "Nhap c = ";
    cin >> c;
    // kiểm tra c và b và nếu c < b thì đổi chỗ b và c bằng hàm hoandoi(b, c)
    if (c < b)
    {
        hoandoi (b, c);
    }

    float S1 = tinh_S(a, c);
    float S2 = tinh_S(a, b);
    float S3 = S1 - S2;
    cout << "S(a, c) - S(a, b) = " << S3 << endl;

    return 0;
}