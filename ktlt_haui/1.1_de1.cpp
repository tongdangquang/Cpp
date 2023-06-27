#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

// câu a;
void cau_a(int &n, float &x)
{
    cout << "nhap n = ";
    cin>> n;
    cout << "nhap x = " ;
    cin >> x;
}

// câu b;
float cau_b(int n, float x)
{
    float F = 0;
    float p = 1.0;
    float q;
// trường hợp n > 0
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            p *= x;
            F += (p - i)/(2.0*n - i);
        }
    }
// trường hợp n == 0
    else if (n == 0)
    {
        F = (1.0 - 0)/(2.0*0 - 0); // kết quả trả về là không hợp lệ infinity
    } 
// trường hợp n < 0
    else
    {
        for (int i = 1; i <= -n; i++)
        {
            p *= x;
            q = 1.0/p;
            F += (q - (-i))/(2.0*n - (-i));
        }
    }
    return F;
}

// câu c;
float cau_c(int n, float x)
{
    float p = 1.0;
    float q;
    float S;
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            p *= x;
        }
        S = p + n;
    }

    else if (n == 0)
    {
        p = p;
        S = p + n;
    }

    else
    {
        for (int i = 1; i <= abs(n); i++)
        {
            p *= x;
            q = 1.0/p;
        }
        S = q + n;
    }
    return S;
}

// câu d;
float cau_d(int n, float x)
{
    float P;
    if (x > 0 && n > 0)
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
    int n;
    float x;
    float K;
    cau_a(n, x);
    cout << "Gia tri F(n, x) = " << cau_b(n, x) << endl;
    cout << string (30, '-') << endl;
    cout << "Gia tri S(n, x) = " << cau_c(n, x) << endl;
    cout << string (30, '-') << endl;
    cout << "Gia tri P(n, x) = " << cau_d(n, x) << endl;
    cout << string (30, '-') << endl;
    K = cau_b(n, x) + cau_c(n, x) - cau_d(n, x);
    cout << " Gia tri cua K = F + S - P = " << K << endl;
}