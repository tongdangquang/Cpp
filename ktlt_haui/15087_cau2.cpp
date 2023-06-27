#include <iostream>
#include <fstream>
#include <stdio.h>
#include <math.h>
using namespace std;


// hàm nhập mảng
void nhap (float *m, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap [" << i << "] = ";
        cin >> m[i];
    }
}


// hàm xuất mảng
void xuat (float * m, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << m[i] << "\t";
    }
    cout << endl;
}


// hàm sắp xếp mảng giảm dần
void giamdan (float *m, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (m[i] < m[j])
            {
                int t = m[i];
                m[i] = m[j];
                m[j] = t;
            }
        }
    }
}


// hàm tính tổng các số thuộc đoạn [3, 8] trong mảng
float sum (float *m, int n)
{
    float s = 0;
    for (int i = 0; i < n; i++)
    {
        if (m[i] >= 3 && m[i] <= 8)
        {
            s += m[i];
        }
    }
    return s;
}


// hàm chèn phần tử x vào sau phân tử đầu tiên của mảng
void chen (float *m, int &n, float x)
{
    for (int i = n; i >= 1; i--)
    {
        m[i] = m[i - 1];
    }
    m[1] = x;
    n++;
}


// hàm ghi file
void write(float *m, int n, const char * filename)
{
    ofstream ofs(filename);
    if (!ofs.is_open())
    {
        cout << "Erorr file!" << endl;
        exit (1);
    }
    // giamdan (m, n);
    for (int i = 0; i < n; i++)
    {
        ofs << m[i] << "\t";
    }

    ofs.close();
}


// hàm đọc file
void read (const char * filename)
{
    ifstream ifs(filename);
    if (!ifs.is_open())
    {
        cout << "Erorr file!" << endl;
        exit (1);
    }
    float num;
    while ((ifs >> num))
    {
        cout << num << "\t";
    }
    cout << endl;

    ifs.close();
}


int main ()
{
// nhập n 
    int n;
    cout << "Nhap n = ";
    cin >> n;

// sử dụng con trỏ cấp phát bộ nhớ động
    float * A = new float [n];

// nhập và xuất mảng A gồm n phần tử
    nhap (A, n);
    cout << "Xuat mang: ";
    xuat (A, n);

// xuất mảng A vào tệp tin ABC2105.DAT
    write (A, n, "ABC2105.DAT");

// sắp xếp mảng giảm dần và nhập mảng đã sắp xếp vào tệp tin XYZ2105.txt
    giamdan (A, n);
    write (A, n, "XYZ2105.txt");

// tính tổng các phần tử có giá trị thuộc [3, 8] và in ra màn hình
    float s = sum (A, n);
    cout << "Tong cac phan tu co gia tri thuoc [3, 8] = " << s << endl;

// nhập một số thực x và chèn x vào sau phần tử đầu tiên của mảng
    float x;
    cout<< "Nhap x = ";
    cin >> x;
    chen (A, n, x);
    xuat (A, n);

    return 0;
}

