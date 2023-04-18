// tìm các số nguyên tố thuộc khoảng từ 1 đến n
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
    int i, j;
    bool nt;
    int n;
    cout << "nhap n = ";
    cin >> n;
    int tong = 0;

    for(i = 1; i <= n; i++) 
    {
        if(i == 1 || i == 0)
            continue;

        nt = true;

        for(j = 2; j <= i / 2; j++)
        {
            if(i % j == 0)
            {
                nt = false;
                // break;
            }
        }

        if(nt == true)
        {
            cout << i << " ";
            tong = tong + i;
        }

    }
    cout << endl;
    cout << "tong = " << tong << endl;
}

// kiểm tra một số có phải là số nguyên tố hay không
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    int n, i;
    bool nt = true;
    char e;
    do
    {
        cout << "nhap n = ";
        cin >> n;

        for(i = 2; i <= n / 2; ++i)
        {
            if(n % i == 0)
            {
                nt = false;
                break;
            }
        }
        if (nt)
            cout << n << " la so nguyen to" << endl;
        else
            cout << n << " khong la so nguyen to" << endl;

        cout << "nhap y de tiep tuc: "; cin >> e;

    } while (e == 'y' || e == 'Y');
}

// tìm các số nguyên tố thuộc khoảng từ 1 đến n

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

bool nt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return n > 1;
}

int main ()
{
    int n;
    cout << "nhap n = ";
    cin >> n;
    for (int j = 1; j <= n; j++)
    {
        if(nt(j))
        {
            cout << "i = " << j << endl;
        }
    }
}
