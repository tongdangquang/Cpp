#include <iostream>
#include <conio.h>
#include <algorithm>
#include <random>
#include <math.h>
using namespace std;

int main()
{
    // 1. khởi tạo mảng 2 chiều
    int a[3][4];
    string b[3][3];

    // 2. khởi tạo và gán giá trị
    int d = 3;
    int c = 3;
    int m[d][c] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // 3. truy xuất từng phần tử
    cout << "m[2][2] = " << m[2][2] << endl;

    // 4. thay đổi giá trị cho mảng
    m[1][2] = 10;
    m[2][2] = 20;
}


// 5. nhập mảng từ bàn phím
void nhapmang(int m[100][100], int &d, int &c)
{
    cout << "nhap so dong cho mang: "; cin >> d;
    cout << "nhap so cot cho manh: "; cin >> c;
    
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "nhap m[" << i << "][" << j << "] = ";
            cin >> m[i][j];
        }
    }
}


// 6. xuất mảng
void xuatmang(int m[100][100], int d, int c)
{
    cout << "xuat mang: " << endl;
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
}


//  7. tạo mảng ngẫu nhiên
void mangngaunghien(int m[100][100], int &d, int &c)
{
    cout << "nhap so dong: " ; cin >> d;
    cout << "nhap so cot: " ; cin >> c;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution <> dis (0, 99); // set random interval - đặt khoảng ngẫu nhiên
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < c; j++)
        {
            m[i][j] = dis (gen);
        }
    }
}