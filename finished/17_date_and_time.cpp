#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;

int main ()
{
    time_t now = time(0);
    cout << "so giay hien tai la: " << now << endl;
    char * c = ctime (&now);
    tm * t = localtime(&now);
    char *c1 = asctime(t);
    cout << "thoi gian hien tai: " << c << endl;
    cout << "thoi gian dinh dang thong qua cau truc tm: " << c1 << endl;
    cout << "tach ngay thang nam, gio phut giay: " << endl;
    cout << "ngay/thang/nam: " << t->tm_mday << "/" << 1 + t->tm_mon << "/" << 1900 + t->tm_year << endl;
    cout << "gio/phut/giay: " << t->tm_hour << ":" << t->tm_min << ":" << t->tm_sec << endl;
}   