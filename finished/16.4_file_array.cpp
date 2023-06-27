#include <iostream>
#include <stdio.h>
#include <fstream>
#include <math.h>
using namespace std;

// hàm nhập mảng
void nhapmang(int *m, int &n)
{
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap m[" << i << "] = ";
        cin>> m[i];
    }
}

// hàm xuất mảng
void xuatmang (int * m, int n)
{
    cout << "Mang vua nhap: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "m[" << i << "] = " << m[i] << endl; 
    }
}

// hàm nhập file
void nhapfile (int *m, int n, const string& filename)
{
    ofstream ofs (filename);
    if (!ofs.is_open())
    {
        cout << "Erorr!" << endl;
    }
    for (int i = 0; i < n; i++)
    {
        ofs << m[i] << "\t";
    }

    ofs.close();
}

// hàm đọc file
void xuatfile (const string& filename)
{
    ifstream ifs (filename);
    if (!ifs.is_open())
    {
        cout << "Erorr!" << endl;
    }
    int num;
    cout << "Du lieu trong file:" << endl;
    while (ifs >> num)
    {
        cout << num << "\t";
    }

    ifs.close();
}

int main ()
{
    int n;
    int * m = new int [n];
    nhapmang (m, n);
    nhapfile (m, n, "text.txt");
    xuatfile ("text.txt");
    delete [] m;
}

