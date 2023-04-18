#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main ()
{
    int n;
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