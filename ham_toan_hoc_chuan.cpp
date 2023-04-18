#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    // 1. hàm tính căn bậc hai sprt()
    double x = 16;
    double y = sqrt(x);
    cout << "can bac hai cua " << x << " la " << y<< endl;
    return 0;

    // 2. hàm tính x mũ y pow(x, y)
    double x = 2;
    double y = 3;
    double z = pow(x, y);
    cout << x << " mu " << y << " la " << z << endl;
    return 0;

    // 3. hàm tính sin(x), cos(x), tan(x) và góc x (tính theo đơn vị radian)
    double x = M_PI;
    double s = sin(x);
    double c = cos(x);
    double t = tan(x);
    cout << "sin( " << (double) x << ") = " << s << "pi" << endl;
    cout << "cos( " << (double) x << ") = " << c << "pi" << endl;
    cout << "tan( " << (double) x << ") = " << t << "pi" << endl;

    // 4. hàm tính logarit tự nhiên và logarit cơ số 10 của x
    double x = 100;
    double l = log(x);
    double l10 = log10(x);
    cout << "log( " << x << ") = " << l << endl; 
    cout << "log10( " << x << ") = " << l10 << endl;

    // 5. hàm tính giá trị trần ceil(), giá trị sàn floor(), giá trị làm tròn roud()
    double x = 3.4;
    double c = ceil(x);
    double f = floor(x);
    double r = round(x);
    cout << "gia tri tran cua " << x << ") = " << c << endl;
    cout << "gia tri san cua " << x << ") = " << f << endl;
    cout << "gia tri lam tron cua " << x << ") = " << r << endl;

    // 6. hàm tính giá trị tuyệt đối cho số nguyên abs() và fabs() cho số thực
    int x = -5;
    double y = -12.5;
    int a = abs(x);
    double f = fabs(y);
    cout << "gia tri tuyet doi cua (" << x << ") = " << a << endl;
    cout << "gia tri tuyet doi cua (" << y << ") = " << f << endl;

    // 7. hàm tính phần dư của x/y fmod(x, y)
    int a = 100;
    int b = 70;
    double f = fmod (a, b);
    cout << "phan du cua " << a << " / " << b << " = " << f << endl;

    // 8. hàm tính artan(x) là atan(x) và arctan(y/x)
    double x = 1;
    double y = 2;
    double a = atan(x)/M_PI;
    double a2 = atan2(y, x)/M_PI;
    cout << "arctan(" << x << ") = " << a << "pi" << endl;
    cout << "arctan(" << y << " / " << x << ") = " << a2 << "pi" << endl;

    // 9. hàm tính e mũ x (e là số mũ Euler) exp()
    double x = 2;
    double e = exp(x);
    cout << "e mu " << x << " = " << e << endl;

    // 10. hàm tính sinh(x), cosh(x), tanh(x)
    double x = 1;
    double sh = sinh(x);
    double ch = cosh(x);
    double th = tanh(x);
    cout << "sinh(" << x << ") = " << sh << endl;
    cout << "cosh(" << x << ") = " << ch << endl;
    cout << "tanh(" << x << ") = " << th << endl;
}