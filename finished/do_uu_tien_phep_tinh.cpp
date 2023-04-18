#include <iostream>
using namespace std;

int main()
{
    // 1: khai báo hằng
    const int do_soi = 100;
    const int do_dong = 0;
    cout << "nhiet do soi = " << do_soi << endl;
    cout << "nhiet do dong = " << do_dong << endl;

    // 2: type promotion
    int a = 8;
    double b = 7.5;
    // xuất thử a + b khi không khai báo
    cout << "a + b = " << a + b << endl;
    // khai báo kết quả là int
    int kq1;
    kq1 = a + b;
    cout << "a + b = " << kq1 << endl;
    // khai báo kết quả là double
    double kq2;
    kq2 = a + b;
    cout << "a + b = " << kq2 << endl;
}