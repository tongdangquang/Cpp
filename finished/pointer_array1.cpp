#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;

int main ()
{
// tạo một mảng con trỏ với mảng thông thường
    // khai báo mảng
    int m[] = {1, 2, 3, 4, 5, 6, 7};
    // khai báo con trỏ
    int* pt;
    // gán con trỏ vào mảng (không cần &)
    pt = m;
    // duyệt mảng qua con trỏ
    for (int i = 0; i < size(m); i++)
    {
        // lấy giá tị nằm trên ô nhớ mà pt thứ i quản lý
        cout << *(pt + i) << endl;
        cout << pt[i] << endl;
    }
    // thay đổi giá trị mảng dùng con trỏ
    *(pt + 2) = 100;
    for (int i = 0; i < size(m); i++)
    {
        cout << m[i] << endl;
    }

    
// tạo một mảng con trỏ mà không cần dùng mảng thông thường
    // khai báo mảng con trỏ
    int *mpt[4];
    // duyệt mảng để cấp phát bộ nhớ
    for (int i= 0; i < size (mpt); i++)
    {
        mpt[i] = new int;
    }
    // xuất địa chỉ các ô nhớ của mảng
    for (int i = 0; i < size (mpt); i++)
    {
        cout << mpt[i] << endl;
    }
}

void nhap(int* m, int &n)
{
    cout << "nhap so luong phan tu cho mang con tro: "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "nhap *m[" << i << "] = ";
        cin >> m[i];
    }
}

void xuat(int* m, int n)
{
    cout << "xuat mang con tro: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "m[" << i << "] = " << m[i] << endl;
    }
}

void xoa (int * m, int n)
{
    delete[] m;
}

int main()
{
    int n;
    /* Sử dụng cách khai báo mảng con trỏ **m (hay cong gọi là con trỏ trỏ con trỏ) thì phải cấp phát bộ nhớ 2 lần,
    lần 1 là cấp phát 1 mảng con trỏ lần 2 là cấp phát từng phần tử trong mảng. Dưới đây là cấp phát mảng còn
    cấp phát n phần tử thì nằm trong hàm void. Điều này có thể áp dụng cho cả mảng 1 chiều và 2 chiều nhưng mảng một chiều có thể không cần. */
    int *m = new int[n];
    nhap(m, n);
    xuat(m, n);
    xoa(m, n);
}