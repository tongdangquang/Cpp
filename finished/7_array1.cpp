#include <iostream>
#include <conio.h>
#include <algorithm>
#include <random>
#include <math.h>
using namespace std;

int main ()
{
   // 1. khai báo mảng
   int M[3]; // mảng nguyên có 3 phần tử
   int M2[7]; // mảng nguyên có 7 phần tử


   // 2. khởi tạo mảng (có gán giá trị)
   int m[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
   string m2[] = {"tong", "dang", "quang"};


   // 3. truy xuất các phần tử của mảng
   cout << m[0] << endl;
   cout << m[1] << endl;
   cout << m2[2] << endl;


   // 4. kiểm tra chiều dài của mảng
   cout << "chieu dai mang m[] = " << size (m) << endl;
   cout << "chieu dai mang m2[] = " << size (m2) << endl;


   // 5. duyệt mảng và in ra màn hình
   cout << "m[] = ";
   for (int pt : m)
   {
      cout << pt << " ";
   }
}
// nhập mảng từ bàn phím
void nhap(int m[], int &n)
{
	cout << "nhap so phan tu cua mang: "; 
   cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "nhap m[" << i << "] = ";
		cin >> m[i];
	}
}

// 6. duyệt mảng theo vị trí index
void duyet_mang (int m[], int n) // n = size(m)
{
   cout << "xuat mang: " << endl;
   for (int i = 0; i < n; i++) 
   {
      cout << "m[" << i << "] = " << m[i] << endl;
   }
}


// 7. thay đổi giá trị cho mảng 
// cách 1: thay đổi trực tiếp
int main()
{
   cout << "value of index 2 before changing array m[]: " << m[2] << endl;
   m[2] = 200;
   cout << "value of index 2 after changing array m[]: " << m[2]  << endl;
}
// cách 2: thay đổi giá trị bằng vòng lặp
void changing_value(int m[4], int n)
{
   cout << "enter the number of elements for array: "; cin >> n;
   int a;
   cout << "enter location need to change: "; cin >> a;
   for (int i = 0; i < n; i++)
   {
        if (i == a)
        {
            m[i] += 2; // change element at location i
        }
        cout << "m[" << i << "] = " << m[i] << endl;
   }
}


// 8. create array with the number of elements entered from the keyboard and print that array
void create_array(int m[], int &n)
{
   cout << "enter the number elements for array: "; cin >> n;
   m[n];
   for (int i = 0; i < n; i++)
   {
      cout << "m[" << i << "] = "; cin >> m[i];
   }
   cout << "m[" << n << "] = [ "; 
   for (int i = 0; i < n; i++)
   {
      cout << m[i] << " ";
   }
   cout << "]";
}


// 9.sắp xếp tăng dần
// cách 1: dùng thư viện
void sort_array(int m[], int n)
{
   cout << "enter the number elements for array: "; cin >> n;
   sort (m, m + n);
   cout << "ascending array: ";
   for (int i = 0; i < n; i++)
   {
      cout << m[i] << " ";
   }
}
// cách 2: dùng biến trung gian
void tangdan(int m[]; int n)
{
   for (int i = 0; i < n; i++)
   {
      for (int j = i + 1; j < n; j++)
      {
         if (m[i] > m[j])
         {
            int t = m[i];
            m[i] = m[j];
            m[j] = t; 
         }
      }
   }
}


// 10. sắp xếp giảm dần
// cách 1: dùng thư viện
void sort_array(int m[], int n)
{
   cout << "enter the number elements for array: "; cin >> n;
   sort (m, m + n);
   cout << "descending array: ";
   for (int i = n - 1; i >= 0; i--)
   {
      cout << m[i] << " ";
   }
}
// cách 2: dùng biến trung gian
void giamdan(int m[], int n)
{
   for (int i = 0; i < n; i++)
   {
      for (int j = i + 1; j < n; j++)
      {
         if (m[i] < m[j])
         {
            int t = m[i];
            m[i] = m[j];
            m[j] = t;
         }
      }
   }
}

// 11. đảo ngược mảng
void reverse_array (int m[], int n)
{
   cout << "enter the number elements for array: "; cin >> n;
   reverse (m, m + n);
   cout << "reversed array: ";
   for (int i = 0; i < n; i++)
   {
      cout << m[i] << " ";
   }
}
// đảo ngược mảng thủ công
void nguoc (int m[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end) 
    {
        // Hoán đổi giá trị của hai phần tử
        int t = m[start];
        m[start] = m[end];
        m[end] = t;

        // Tiếp tục xét các phần tử tiếp theo
        start++;
        end--;
    }
}
   

// 12.  tạo một mảng ngẫu nhiên
void sort_array(int m[], int n)
{
   random_device rd;
   mt19937 gen(rd());
   uniform_int_distribution <> dis (0, 99); // set random interval - đặt khoảng ngẫu nhiên
   cout << "Enter the number of elements for array: "; cin >> n;
   m[n];
   for (int i = 0; i < n; i++)
   {
       m[i] = dis(gen);
   }
   for (int i = 0; i < n; i++)
   {
       cout << "m[" << i << "] = " << m[i] << endl;
   }
}

// 13. chèn phần tử vào mảng
void insert_array(int m[], int &n)
{
   cout << "Enter the number of elements for array: "; cin >> n;
   int x, k;
   cout << "enter value need to insert x = "; cin >> x;
   cout << "enter location need to insert k = "; cin >> k;

   for (int i = n; i >= k; i--)
   {
     m[i] = m[i - 1];
   }
   m[k] = x;
   n++;
}

// 14. xóa vị trí trong mảng
void delete_array(int m[], int &n)
{
   cout << "enter the number of elements for array: "; cin >> n;
   int k;
   cout << "enter location need to delete: "; cin >> k;

   for (int i = k; i < n; i++)
   {
      m[i] = m[i + 1];
   }
   n--;
}

// 15. ghép mảng
void ghepmang(int a[], int n, int b[], int m)
{
   int c[100];
   int k = 0;
   for (int i = 0; i< n; i++)
   {
      c[k] = a[i];
      k++;
   }
   
   for (int i = 0; i < m; i++)
   {
      c[k] = b[i];
      k++;
   }
   cout << "xuat mang da ghep: " << endl;
   for (int i = 0; i < k; i++) 
   {
      cout << "m[" << i << "] = " << c[i] << endl;
   }
}


// 16. tách mảng thành một mảng chẵn và một mảng lẻ
void tachmang(int a[], int m, int b[], int &n, int c[], int &k)
{
    n = k = 0;
    for (int i = 0; i < m; i++)
    {
        if(a[i] % 2 == 0)
        {
            b[n] = a[i];
            n++;
        }
        else
        {
            c[k] = a[i];
            k++;
        }
    }
}


// 17. tìm phân tử lớn nhất trong mảng
void max_array(int m[], int n)
{
    int max = m[0];
    for (int i = 0; i < n; i++)
    {
        if (max < m[i])
        {
            max = m[i];
        }
    }
    cout << "max element in the array: m[] = " << max << endl;
}