#include <stdio.h>
#include <cstdlib>

// hàm nhập mảng 
void nhap (int *m, int  n)
{
    for (int i = 0; i < n; i++)
    {
        printf ("Nhap [%d] = ", i);
        scanf ("%d", &m[i]);
    }
}

// hàm xuất mảng
void xuat (int *m , int n)
{
    for (int i = 0; i < n; i++)
    {
        printf ("%d\t", m[i]);
    }
    printf ("\n");
}

// hàm sắp xếp mảng tăng dần
void tangdan (int *m, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (m[i] > m[i])
            {
                int t = m[i];
                m[i] = m[j];
                m[j] = t;
            }
        }
    }
}

// hàm ghi file
void write (int *m, int n, const char * filename)
{
    FILE * f = fopen (filename, "a");
    if (f == NULL)
    {
        printf ("File opening error!\n");
        exit (1);
    }

    for (int i = 0; i < n; i++)
    {
        fprintf (f, "%d\t", m[i]);
    }
    fprintf (f, "\n");

    fclose (f);
}

// hàm tìm các phần tử xuất hiện ít nhất trong mảng và đếm số lần xuất hiện
void find (int *m, int n)
{
    int dem1 = n + 1;
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
    printf ("Cac phan tu xuat hien it nhat trong mang:\t");
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
            printf ("%d\t", m[i]);
        }
    }
    printf ("\nSo lan xuat hien cua cac phan tu: %d\n", dem1);

}

// hàm kiểm tra một số nguyên tố
bool nguyento(int x)
{
    bool kt_nt = true;
    if (x <= 0)
    {
        kt_nt = false;
    }
    else if (x == 1)
    {
        kt_nt = true;
    }
    else
    {
        for (int i = 2; i <= x/2; i++)
        {
            if (x % i == 0)
            {
                kt_nt = false;
                break;
            }
        }
    }

    return kt_nt; 
}

// hàm tìm số nguyên tố trong mảng
void find_nt(int *m, int n)
{
    float sum = 0.0;
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (nguyento(m[i]) == true)
        {
            sum += m[i];
            dem++;
        }
    }
    printf ("So luong so nguyen to trong mang: %d\n", dem);
    printf ("Trung binh cong cac so nguyen to do bang: %0.2f\n", (sum/dem));
}


// hàm kiểm tra mảng hợp lệ
bool hople (int *m, int n)
{
    bool kt = true;
    for (int i = 0; i < n; i++)
    {
        if (nguyento(m[i]) == false)
        {
            kt = false;
            break;
        }
    }
    return kt;
}


// hàm đảo ngược mảng
void daonguoc (int *m,int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        // hoán đổi giá trị 2 phần tử
        int t = m[start];
        m[start] = m[end];
        m[end] = t;

        // tiếp tục xét các phần tử tiếp theo
        start++;
        end--;
    }
}

int main ()
{
    int n;
    printf ("Nhap n = "); // nhập số lượng phần tử cho mảng
    scanf ("%d", &n);

    int * m = (int *) malloc (n* sizeof (int)); // thực hiện cấp phát động cho mảng m gồm n phần tử nguyên 
    nhap (m, n); // thực hiện nhập mảng m gồm n phần tử nguyên

    // tangdan (m, n); // sắp xếp mảng tăng dần

    printf ("Xuat mang:\t");
    xuat (m, n); // xuất mảng tăng dần ra màn hình

    // write (m, n, "f1.txt"); // ghi mảng tăng dần vào file

    // find (m, n); // tìm các phần tử xuất hiện ít nhất trong mảng và đếm số lần xuất hiện

    // find_nt(m, n); // hàm tìm số nguyên tố

    // if (hople(m, n) == true)
    // {
    //     printf ("Mang hop le!\n");
    // }
    // else
    // {
    //     printf ("Mang khong hop le!\n");
    // }

    daonguoc (m, n);
    write (m, n, "f1.txt");
    
    delete [] m;
}