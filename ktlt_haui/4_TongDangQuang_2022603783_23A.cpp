#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

// câu a;
void cau_a(float &x, float &y)
{
    cout << "Nhap x = ";
    cin >> x;
    cout << "Nhap y = ";
    cin >> y;
}

// câu b;
float cau_b(float xA, float yA, float xB, float yB)
{
    float dAB = sqrt(pow((xA - xB), 2) + pow((yA - yB), 2));
    return dAB;
}

// câu c;
void cau_c(float xA, float yA, float xB, float yB, float &m, float &c)
{
    m = (yA - yB)/(xA - xB);
    c = yA - m*xA;
    string str(30, '-'); // biến str dùng để ngăn cách giũa các dòng để dễ nhìn hơn
    cout << "Gia tri cua m = (yA - yB)/(xA - xB) = " << m << endl;
    cout << str << endl;
    cout << "Gia tri cua c = yA - m*xA = " << c << endl;
    cout << str << endl;
    cout << "Tu m va c ta co duong thang di qua 2 diem A va B la: y = " << m << "x + " << c << endl;
    cout << str << endl;
}

// câu d;
float cau_d(float x, float y, int k)
{
    float d = sqrt(pow((x - 0), 2) + pow((y - 0), 2));
    float F = 2023;
    int p = 1;
    for (int i = 1; i <= k; i++)
    {
        p *= d;
        F+= 1.0/p;
    }
    return F;
}

// câu e;
// Định nghĩa hằng số M là số nguyên bằng với mã sinh viên
#define M 2022603783
int main()
{
    float xA, yA, xB, yB, m, c;
    string str(30, '-');
// Nhập tọa độ điểm A và B:
    cau_a(xA, yA);
    cout << "Toa do diem A(" << xA << ", " << yA << ")" << endl;
    cout << str << endl;
    cau_a (xB, yB);
    cout << "Toa do diem B(" << xB << ", " << yB << ")" << endl;
    cout << str << endl;

// Tính khoảng cách giữa 2 điểm A và B:
    cout << "Khoang cach giua 2 diem A va B la: dAB = " << cau_b(xA, yA, xB, yB) << endl;
    cout << str << endl;

// Tính các hệ số m, c và đường thằng đi qua 2 điểm A và B:
    cau_c(xA, yA, xB, yB, m, c);

// Tính k:
    int k = (M % 5) + 5;
    cout << "Gia tri k = " << k << endl;
    cout << str << endl;

// Tính F(xA, yB, k):
    cout << "Gia tri cua F(xA, yA, k) = " << fixed << setprecision(3) << cau_d(xA, yA, k) << endl;
}
