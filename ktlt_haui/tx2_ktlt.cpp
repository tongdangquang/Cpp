#include <stdio.h>
#include <math.h>

// hàm nhập mảng
void nhap (int *m, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf ("Nhap [%d] = ", i);
        scanf ("%d", &m[i]);
    }
    printf ("\n");
}


// hàm xuất mảng
void xuat (int *m, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf ("%6d", m[i]);
    }
    printf ("\n");
}


// kiểm tra xem mảng có chứa 2 số liên tiếp chia hết cho 3 không
bool check_3 (int *m, int n)
{
    bool kt =false;
    for (int i = 0; i < n; i++)
    {
        if (m[i] % 3 == 0 and m[i + 1] % 3 == 0)
        {
            kt = true;
            break;
        }
    }
    return kt;
}


// hàm sắp xếp mảng tăng dần
void tangdan(int *m, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (m[i] > m[j])
            {
                int t = m[i]; // sử dụng biến tạm t để hoán đổi giá trị 
                m[i] = m[j];
                m[j] = t;
            }
        }
    }
}


// hàm ghi file
void write (int *m, int n, const char * filename)
{
    FILE * f = fopen(filename, "a"); // kiểm tra xem có mở file được không
    if (f == NULL)
    {
        printf ("File opening error!\n");
        exit(1);
    }

    for (int i = 0; i < n; i++)
    {
        fprintf (f, "%6d", m[i]);
    }
    fprintf (f, "\n");

    fclose (f); // đóng file
}


// hàm kiểm tra một số có phải là số nguyên tố hay không
bool check_snt(int x)
{
    bool kt = true;
    if (x <= 0)
    {
        kt = false;
    }
    else
    {
        if (x == 1)
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
    }
    return kt;
}


// hàm tính và in ra màn hình tổng các số nguyên tố trong mảng
int sum (int *m, int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (check_snt(m[i]) == true)
        {
            s += m[i];
        }
    }
    return s;
}


// hàm kiểm tra mảng có hợp lệ hay không
bool check_hople(int *m, int n)
{
    bool kt = true;
    for (int i = 0; i < n; i++)
    {
        if (check_snt(m[i]) == false)
        {
            kt = false;
            break;
        }
    }
    return kt;
}


// hàm chèn phân tử 0 vào đầu mảng
void chen (int *m, int &n)
{
    for (int i = n; i >= 0; i--)
    {
        m[i] = m[i - 1];
    }
    m[0] = 0;
    n++;
}


int main ()
{
    int n; 
    printf ("Nhap n = ");
    scanf ("%d", &n); // nhập n từ bàn phím

    int *m = new int [n]; // thực hiện cấp phát động cho mảng m gồm n số nguyên bằng toán tử new

    printf ("Nhap mang: \n");
    nhap (m, n); // nhập mảng m gồm n số nguyên từ bàn phím

    bool kt1 = check_3(m, n); // kiểm tra xem mảng có chứa 2 số liên tiếp chia hết cho 3 không
    if (kt1 == true)
    {
        printf ("Mang co chua 2 so lien tiep cùng chia het cho 3.\n");
    }
    else
    {
        printf ("Mang khong chua 2 so lien tiep cung chia het cho 3.\n");
    }

    tangdan(m, n); // sắp xếp mảng tăng dần
    printf ("Mang tang dan: ");
    xuat (m, n);
    write (m, n, "fileTest.txt"); // ghi mảng tăng dần ra tệp

    int s = sum (m, n); // tính tổng các số nguyên tố trong mảng
    printf ("Tong cac so nguyen to trong mang = %d\n", s);

    bool kt2 = check_hople (m, n); // kiểm tra xem mảng có phải mảng hợp lệ không
    if (kt2 == true)
    {
        printf ("Mang hop le.\n");
    }
    else
    {
        printf ("Mang khong hop le.\n");
    }

    chen(m, n); // chèn phần tử 0 vào đầu mảng
    write (m, n, "fileTest.txt"); // ghi mảng ra file sau khi chèn
    printf("Mang sau khi chen: ");
    xuat (m, n);

    delete [] m; // giải phóng bộ nhớ
}
