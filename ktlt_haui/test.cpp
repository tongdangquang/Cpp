#include <iostream>
using namespace std;

// hàm nhập mảng
void nhap (int *m, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap [" << i << "] = ";
        cin >> m[i];
    }
}

// hàm xuất mảng 
void xuat (int *m, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << m[i] << "\t";
    }
    cout << endl;
}

// hàm kiểm tra số nguyên tố
bool check_nt (int x)
{
    bool kt = true;
    if (x <= 0)
    {
        kt = false;
    }
    else if (x == 1)
    {
        kt = true;
    }
    else
    {
        for (int i = 2; i <= x/2; i++)
        {
            if (x % i == 0)
            {
                kt = false;
                break;
            }
        }
    }
    return kt;
}

// hàm tìm số nguyên tố trong mảng
void find (int *m, int n)
{
    float sum = 0.0;
    int dem = 0;
    cout << "So nguyen to trong mang: ";
    for (int i = 0; i < n; i++)
    {
        if (check_nt(m[i]) == true)
        {
            cout << m[i] << "\t";
            sum += m[i];
            dem++;
        }
    }
    cout << "\nSo luong so nguyen to trong mang: " << dem << endl;
    cout << "Trung binh cong cac so nguyen to trong mang: " << sum/dem << endl;
}

// hàm tìm phần tử xuất hiện ít nhất trong mảng
void find2 (int *m, int n)
{
    int dem1 = n;
    for (int i = 0; i < n; i++)
    {
        int dem2 = 0;
        for (int j = 0; j < n; j++)
        {
            if (m[i] == m[j])
            {
                dem2++;
            }
        }
        if (dem2 < dem1)
        {
            dem1 = dem2;
        }
    }
    cout << "\nCac phan tu xuat hien it nhat trong mang:\t";
    for (int i = 0; i < n; i++)
    {
        int dem2 = 0;
        for (int j = 0; j < n; j++)
        {
            if (m[i] == m[j])
            {
                dem2++;
            }
        }
        if (dem2 == dem1)
        {
            cout << m[i] << "\t";
        }
    }
    cout << endl;
}
int main ()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
    int *m = new int [n];

    nhap (m, n);
    cout << "Xuat mang: ";
    xuat (m, n);
    find2 (m, n);

    delete [] m;
}