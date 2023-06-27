#include <stdio.h>
#include <stdlib.h>

// hàm nhập mảng
void nhap(int x[], int &n)
{
    do
    {
        printf ("nhap so phan tu cua mang: ");
        scanf ("%d", &n);
    } while (n <= 0);

    for (int i = 0; i < n; i++)
    {
        printf ("x[%d] = ", i);
        scanf ("%d", &x[i]);
    }
}

// hàm xuất mảng
void xuat (int x[], int n)
{
    printf ("Xuat mang: \n");
    for (int i = 0; i < n; i++)
    {
        printf ("x[%d] = %d\n", i, x[i]);
    }
}

// hàm ghi mảng vào file
void write(int x[], int n, const char* filename)
{
    FILE *f = fopen(filename, "w");
    if (f == NULL)
    {
        printf ("mo file khong thanh cong\n");
        return;
    }
    fprintf (f, "%d\n", n);
    for (int i = 0; i < n; i++)
    {
        fprintf (f, "%d\n", x[i]);
    }
    fclose(f);
}

// hàm xuất mảng từ file
void read (int x[], int n, const char * filename)
{
    FILE *f = fopen(filename, "r");
    if (f == NULL)
    {
        printf ("mo file khong thanh cong\n");
        return;
    }

    fscanf (f, "%d", &n);
    printf ("so luong phan tu co trong file: %d\n", n);

    for (int i = 0; i < n; i++)
    {
        fscanf (f, "%d", &x[i]);
        printf ("x[%d] = %d\n", i, x[i]);
    }
    fclose (f);
}

// hàm xuất file (hàm này xuất đến phần tử cuối cùng trong file luôn)
void read2 (const char * filename)
{
    FILE *f = fopen(filename, "r");
    if (f == NULL)
    {
        printf ("mo file khong thanh cong\n");
        return;
    }
/*  cơ chế hoạt động khi đọc file là sẽ đọc lần lượt theo thứ tự, 
    nếu phần tử nào đã được đọc riêng ròi thì sẽ không đọc lại trong vòng lặp nữa 
    (chạy doàn code được comments dưới đây để hiểu vấn đề) */
    // int n;
    // fscanf (f, "%d", &n);
    // printf ("%d\n", n);
    // int b;
    // fscanf (f, "%d", &b);
    // printf ("%d\n", b);
    
    int a;
    while (fscanf (f, "%d", &a) != EOF)
    {
        printf ("%d\t", a);
    }
    n = i;
    
    fclose (f);
}


int main ()
{
    int x[7];
    int n;
    xuatfile2(x, n, "text.txt");
}