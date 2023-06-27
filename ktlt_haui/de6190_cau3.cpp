#include <stdio.h>
#include <math.h>

// hàm nhập một mảng n số nguyên
void nhap(int * m, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf ("Nhap [%d] = ", i);
        scanf ("%d", &m[i]);
    }
}

// hàm xuất mảng
void xuat (int * m, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf ("%4d", m[i]);
    }
}

// hàm trả về giao của 2 dãy số
void giao (int * m, int * a, int n, int *c, int &d)
{
    d = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (m[i] == a[j])
            {
                c[d] = m[i];
                d++;
            }
        }
    }

}

// hàm xuất mảng vào file
void write (int * m, int n, const char * filename)
{
    FILE * f = fopen(filename, "w");
    if (f == NULL)
    {
        printf ("Error file!");
        exit (1);
    }

    for (int i = 0; i < n; i++)
    {
        fprintf (f, "%6d", m[i]);
    }

    fclose (f);
}

// hàm đọc file
void read (const char * filename)
{
    FILE * f = fopen(filename, "r");
    if (f == NULL)
    {
        printf ("Error file!");
        exit (1);
    }

    int num;
    printf ("Mang trong file: ");
    while (fscanf (f, "%6d", &num) != EOF)
    {
        printf ("%6d", num);
    }
    printf ("\n");

    fclose (f);
}

int main ()
{
    // int n, d;
    // printf ("Nhap so phan tu cho mang: ");
    // scanf ("%d", &n);
    // int * m = new int [n];
    // int * a = new int [n];
    // int * c = new int [d];
    // printf ("Nhap mang m: \n");
    // nhap (m, n);
    // write (m, n, "f1.txt");

    // printf ("Nhap mang a: \n");
    // nhap (a, n);
    // write (a, n, "f2.txt");

    // giao (m, a, n, c, d);
    // printf ("Nhung phan tu giao cua mang m va a: ");
    // xuat (c, d);
    // write (c, d, "f3.txt");
    // printf ("\n");

    // đọc file
    read ("f1.txt");
    read ("f2.txt");
    read ("f3.txt");
    // delete [] m;
    // delete [] a;
    // delete [] c;
}