#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;

// Hàm nhập mảng 2 chiều
void nhapMang(int** a, int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Nhap a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }
}

// Hàm in mảng 2 chiều
void inMang(int** a, int m, int n)
{
    cout << "Mang vua nhap la:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

// Hàm chính
int main()
{
    int m, n;

    // Nhập số hàng và số cột của mảng
    cout << "Nhap so hang cua mang: ";
    cin >> m;
    cout << "Nhap so cot cua mang: ";
    cin >> n;

    // Khởi tạo mảng 2 chiều với số hàng và số cột đã nhập
    int** a = new int*[m];
    for (int i = 0; i < m; i++) {
        a[i] = new int[n];
    }

    // Nhập giá trị cho từng phần tử của mảng
    nhapMang(a, m, n);

    // In mảng ra màn hình để kiểm tra
    inMang(a, m, n);

    // Giải phóng bộ nhớ đã cấp phát cho mảng
    for (int i = 0; i < m; i++) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}



// hàm nhập mảng con trỏ 2 chiều từ bàn phím 
void nhap (int** &m, int &d, int &c)
{
    cout << "nhap so dong cho mang: "; cin >> d;
    cout << "nhap so cot cho mang: "; cin >> c;
    m = new int* [d];
    // khởi tạo mảng 2 chiều với số dòng và số cột đã nhập
    for (int i = 0; i < d; i++)
    {
        m[i] = new int [c];
    }
    // nhâp từng phần tử cho mảng
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "nhap *m[" << i << "][" << j << "] = ";
            cin >> m[i][j];
        }
    }
}

// hàm xuất các giá trị của mảng ra màn hình
void xuat (int** m, int d, int c)
{
    cout << "xuat gia tri mang: " << endl;
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << m[i][j] << "  ";
        }
        cout << endl;
    }
}

// hàm xuất các ô nhớ của mảng ra màn hình
void xuat_o_nho (int ** m, int d, int c)
{
    cout << "bo nho cua mang: " << endl;
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << &m[i][j] << "  ";
        }
        cout << endl;
    }
}

// giải phóng bộ nhớ đã cấp phát cho mảng
void xoa (int** m, int d, int c)
{
    for (int i = 0; i < d; i++)
    {
        delete[] m[i];
    }
    delete[] m;
}

int main ()
{
    int d, c;
    int** m;
    nhap (m, d, c);
    xuat (m, d, c);
    xuat_o_nho(m, d, c);
    xoa (m, d, c);
}


int main ()
{
    int d = 3;
    int c = 4;
    /* Sử dụng cách khai báo mảng con trỏ **m (hay cong gọi là con trỏ trỏ con trỏ) thì phải cấp phát bộ nhớ 2 lần,
    lần 1 là cấp phát 1 mảng con trỏ lần 2 là cấp phát từng phần tử trong mảng. Dưới đây là cấp phát mảng còn
    cấp phát n phần tử thì nằm trong hàm void. Điều này có thể áp dụng cho cả mảng 1 chiều và 2 chiều nhưng mảng một chiều có thể không cần. */
    int** m = new int* [d];
    for (int i = 0; i < d; i++)
    {
        // cấp phát bộ nhớ cho từng phần tử cột
        m[i] = new int [c]; // cách 1
        *(m + i) = new int[c]; // cách 2
    }

    // xuất địa chỉ các ô nhớ của con trỏ cấp 2
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << &m[i][j] << " ";
        }
        cout << endl;
    }
    // gán các phần tử cho con trỏ mảng
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < c; j++)
        {
            m[i][j] = i+ j;
        }
    }
    // /duyệt mảng ra màn hình
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    // xóa bộ nhớ
    for (int i = 0; i < d; i++)
    {
        delete[] m[i];
    }
    delete[] m;
}