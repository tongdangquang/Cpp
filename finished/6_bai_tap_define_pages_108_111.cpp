#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

// Bài 1: 
// ý 1: nhập vào một sô nguyên dương, nếu không thỏa mãn thì nhập lại
void nhap ()
{
    int k, n;
    do
    {
        cout << "nhap k = "; cin >> k;
        cout << "nhap n = "; cin >> n;
        if (n >= k && n > 0 && k >= 0)
        {
            cout << "gia tri k vua nhap = " << k << endl;
            cout << "gia tri n vua nhap = " << n << endl;
        }
        else
        {
            cout << "nhap lai k voi dieu kien n >= k, n > 0 va k >= 0!" << endl;
        }
    } while (n < k && n < 0 && k < 0);
    cout << "thank you!" << endl;
}

// ý 2: hàm tính k! với k nguyên dương bất kỳ
int giaithua (int k)
{
    if (k == 0 || k == 1)
        return 1;
    else 
        return k * giaithua(k - 1);
}

// ý 3: hàm tính tổ hợp chập k của n
int tohop(int n, int k) {
   return giaithua(n) / (giaithua(k) * giaithua(n - k));
}

//  ý 4:
int main ()
{
    int k, n;
    do
    {
        cout << "nhap k = "; cin >> k;
        cout << "nhap n = "; cin >> n;
        if (n >= k && n > 0 && k >= 0)
        {
            cout << "gia tri k vua nhap = " << k << endl;
            cout << "gia tri n vua nhap = " << n << endl;
        }
        else
        {
            cout << "nhap lai k voi dieu kien n >= k, n > 0 va k >= 0!" << endl;
        }
    } while (n < k && n < 0 && k < 0);

    cout << "to hop chap " << k << " cua " << n << " = " << tohop(n, k) << endl;
}

// Bài 3: viết chương trình tìm ước chung lớn nhất của 2 số bất kỳ
int nhap ();
int ucln(int a, int b);

int main ()
{
    int a = nhap();
    int b = nhap();
    cout << "uoc chung lon nhat cua " << a << " va " << b << " la " << ucln(a, b) << endl;
}

int nhap ()
{
    int n;
    do
    {
        cout << "nhap so = "; cin >> n;
    } while (n < 0);
    return n;
}

int ucln(int a, int b)
{   if (b == 0)
        return a;
    float r = a % b;
    return ucln(b, r);
}

// Bài 4: viết chương trình đếm số chữ số của một số n
int demso (int n);
int nhap();

int main ()
{
    int n = nhap();
    cout << "so chu so cua " << n << " la " << demso(n) << endl;
}

int demso (int n)
{
    int dem = 0;
    while (n > 0)
    {
        n = n / 10;
        dem++;
    }
    return dem;
}

int nhap()
{
    int n;
    do
    {
        cout << "nhap n = "; cin >> n;
        if (n < 0)
            cout << "nhap lai n >= 0" << endl;
    } while (n < 0);
    return n;
}

/*int main() {
    int n;
    cout << "Nhap mot so nguyen duong co 4 chu so: ";
    cin >> n;

    // In ra cac chu so cua so n
    for (int i = 3; i >= 0; i--)
    {
        int a = n / (int)pow(10, i);
        int b = (n / (int)pow(10, i)) % 10;
        cout << b << " "; // In ra chu so tuong ung
    }
    return 0;
}*/

// Bài 5: viết chương trình tính tiền điện
void nhap(int &dt, int &ct);
int tinh(int b);

int main() {
    int dt, ct;
    nhap(dt, ct);
    cout << "Chi so dien dau thang: " << dt << endl;
    cout << "Chi so dien cuoi thang: " << ct << endl;
    cout << "tien dien phai tra cua thang nay la: " << tinh(ct) << endl;
}

int tinh(int b)
{
    int gia;
    if (b <= 100)
        gia = 1000 * b;
    else if (b > 100 && b < 200)
        gia = (100 * 1000) + ((b - 100) * 1700);
    else
        gia = (100 * 1000) + (100 * 1700) + ((b - 200) * 3500);
    return gia;
}

void nhap(int &dt, int &ct) {
    do {
        cout << "Nhap chi so dien dau thang: ";
        cin >> dt;
        cout << "Nhap chi so dien cuoi thang: ";
        cin >> ct;
        if (dt >= ct || dt <= 0) {
            cout << "Vui long nhap lai! Chi so dien dau thang phai nho hon chi so dien cuoi thang va lon hon 0." << endl;;
        }
    } while (dt >= ct || dt <= 0);
}

// Bài 6: fibonacci

int nhap();
long long fb(int n);
int main ()
{
    int n = nhap();
    cout << "Fibonaci voi F(" << n << ") = " << fb (n) << endl;
}
int nhap()
{
    int n;
    do
    {
        cout << "nhap n = "; cin >> n;
        if (n < 1)
            cout << "nhap lai n voi dieu kien n >= 1" << endl;
    } while (n < 1);
    return n;
}
long long fb (int n)
{
    if (n <= 2)
        return n = 1;
    else
        return fb(n - 1) + fb(n - 2);
}
