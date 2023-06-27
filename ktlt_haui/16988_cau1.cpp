#include <iostream>
#include <math.h>
using namespace std;

// Câu a: hàm nhập tọa độ ddiemr A(x, y)
void nhap (float &x, float &y)
{
    cout << "Nhap x = ";
    cin >> x;
    cout << "Nhap y = ";
    cin >> y;
}

// Câu b: hàm tính và trả về khoảng cách giữa 2 điểm A và B
float tinh_d (float x1, float y1, float x2, float y2)
{
    float d = abs(x2 - x1) + abs(y2 - y1);
    return d;
}

// Câu c: hàm tính và trả về F(x1, y1, x2, y2, n)
float tinh_F(float x1, float y1, float x2, float y2, int n)
{
    float p = tinh_d(x1, y1, x2, y2);
    float F = 2020.0 * n;
    float x = 1.0;
    for (int i = 1; i <= n; i++)
    {
        x *= p;
        F += x/(2*i + 1);
    }
    return F;
}

int main ()
{
    float x1, y1, x2, y2;
    nhap (x1, y1);
    cout << "Toa do A(" << x1 << ", " << y1 << ")" << endl;
    nhap (x2, y2);
    cout << "Toa do B(" << x2 << ", " << y2 << ")" << endl;

    int n;
    cout << "Nhap n = ";
    cin >> n;

    float d = tinh_d (x1, y1, x2, y2);
    cout << "Khoang cach A va B la d = " << d << endl;

    float F = tinh_F (x1, y1, x2, y2, n);
    cout << "F(x1, y1, x2, y2, n) = " << F << endl;

    return 0;
}