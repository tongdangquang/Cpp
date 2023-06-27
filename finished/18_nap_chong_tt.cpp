#include <iostream>
#include <stdio.h>
#include <math.h>
#include <fstream>
using namespace std;

struct point
{
    int x;
    int y;
// nhập dữ liệu
    friend istream& operator >> (istream &is, point & p)
    {
        cout << "nhap x = ";
        cin >> p.x;
        cout << "nhap y = ";
        cin >> p.y;

        return is;
    }

// xuất dữ liệu
    friend ostream& operator << (ostream &os, point p)
    {
        cout << "x = " << p.x << endl;
        cout << "y = " << p.y << endl;

        return os;
    }

// tính tổng dữ liệu (tương tự thì chỉ cần thay đổi dấu sau operator)
    friend point operator + (point p1, point p2)
    {
        point p3;
        p3.x = p1.x + p2.x;
        p3.y = p1.y + p2.y;

        return p3;
    }

// so sánh (tương tự cũng chỉ cần thay dấu sau operator và ở return)
    // nếu đúng sẽ trả về 1 và sai trả về 0
    friend point operator > (point p1, point p2)
    {
        return p1 > p2;
    }

};

int main()
{
// thực thi phép nhập
    point p1;
    cout << "nhap p1: " << endl;
    cin >> p1;

// thực thi phép xuất
    cout << "tong: " << p1.x + p1.y << endl;

// thực thi phép so sánh
    cout << "ket qua so sanh la: " << (p1.x > p1.y) << endl;
}