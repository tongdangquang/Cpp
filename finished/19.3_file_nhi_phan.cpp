#include <iostream>
#include <stdio.h>
#include <math.h>
#include <fstream>
using namespace std;

struct date
{
    int day;
    int mon;
    int year;
};

int main ()
{
    // FILE * f = fopen("text.bin", "wb"); // chế độ ghi file nhị phân
    FILE * f = fopen("text.bin", "rb"); // chế độ đọc file nhị phân
    if (f == NULL)
    {
        printf("mo file khong thanh cong\n");
        return 1;
    }
// ghi file nhị phân
    date d1;
    printf ("nhap day: ");
    scanf ("%d", &d1.day);
    printf ("Nhap thang: ");
    scanf ("%d", &d1.mon);
    printf ("Nhap nam: ");
    scanf ("%d", &d1.year);
    fwrite (&d1, sizeof(struct date), 1, f);

// đọc file nhị phân
    date d1;
    fread (&d1, sizeof(struct date), 1, f);
    printf ("Ngay sinh: %d/%d/%d\n", d1.day, d1.mon, d1.year);

    fclose (f);
}
