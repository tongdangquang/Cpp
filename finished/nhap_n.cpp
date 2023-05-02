#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

// hàm nhập giá trị từ bàn phím
void nhap(int &n)
{
    do
    {
        cout << "nhap n = ";
        cin >> n;
        if (n >= 0)
        {
            cout << "vay n = " << n << endl;
        }
        else
        {
            cout << "nhap lai n voi dieu kien n >= 0!" << endl;
        }
    } while (n < 0);
    cout << "thank you" << endl;
}

// hàm tính mũ bằng vòng lặp for
void tinhmu(int x, int n)
{
    cout << "nhap x = "; cin >> x;
    cout << "nhap n = "; cin >> n;
    int a = 1;
    for (int i = 0; i < n; i++)
    {
        a = a * x;
    }
    cout << "gia tri cua x mu n: pow(x, n) = " << a << endl;
}

// hàm đệ quy tính k!
int giaithua (int k)
{
    if (k == 0 || k == 1)
        return 1;
    else 
        return k * giaithua(k - 1);
}

// chương trình tách 1 số tự nhiên ra thành các sô tự nhiên hợp thành nó
int main()
{
    int num;
    cout << "Nhap mot so nguyen: ";
    cin >> num;

    // Tach cac chu so va in ra
    int a;
    cout << "Cac chu so cua so " << num << " la: ";
    while (num != 0) {
        a = num % 10;
        cout << a << " ";
        num /= 10;
    }
}
