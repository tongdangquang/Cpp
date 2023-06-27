#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;


// hàm nhập mảng
void nhap(float *m, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap [" << i << "] = ";
        cin >> m[i];
    }
}


// hàm xuất mảng
void xuat (float *m, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << m[i] << "\t";
    }
    cout << endl;
}


// hàm sắp xếp dãy số giảm dần
void giamdan (float * m, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (m[i] < m[j])
            {
                float t = m[i]; // sử dụng biến tạm t để đổi chỗ các phần tử trong mảng
                m[i] = m[j];
                m[j] = t;
            }
        }
    }
}


// hàm tính tổng các phần tử dương trong dãy và...
float sum (float *m, int n)
{
    float P = 0.0;
    float Q = 0.0;
    for (int i = 0; i < n; i++)
    {
        if (m[i] > 0)
        {
            P += m[i]; // tính tổng các phần tử dương trong mảng
        }
        Q += m[i]; // tính tổng các phần tử trong mảng
    }
    Q = Q/n;
    float k = P/Q;

    return k;
}


// hàm sắp xếp dãy số tăng dần
void tangdan (float * m, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (m[i] > m[j])
            {
                float t = m[i]; // sử dụng biến tạm t để đổi chỗ các phần tử trong mảng
                m[i] = m[j];
                m[j] = t;
            }
        }
    }
}


// hàm lấy phần tử có tổng không quá 30
/* MÔ TẢ CÁCH LÀM: sắp xếp mảng theo thứ tự tăng dần xong sau đó cộng dồn lần lượt các phần từ bé đến lớn
                   cho đến khi tổng s lớn hơn hoặc bằng 30 thì sử dụng break để thoát vòng lặp*/
void choose (float * m, int n)
{
    float a = 30.0;
    float s = 0.0;
    int dem = 0;
    tangdan (m, n);
    cout << "Nhung phan tu co tong khong qua 30:" << endl;
    for (int i = 0; i < n; i++)
    {
        s += m[i];
        if (s > 30)
        {
            break;
        }
        dem++;
        cout << m[i] << "\t";
    }
    cout << endl;
    cout << "Vay co " << dem << " phan tu!" << endl;
}


// hàm ghi file
void write(float *m, int n, const char * filename)
{
    ofstream ofs(filename, ios::app);
    if (!ofs.is_open()) // kiểm tra xem có mở được file không 
    {
        cout << "Error file!" << endl;
        exit (1);
    }

    for (int i = 0; i < n; i++)
    {
        ofs << m[i] << "\t";
    }
    ofs << endl;

    ofs.close();
}


// hàm đọc file
void read (const char * filename)
{
    ifstream ifs(filename);
    if (!ifs.is_open()) // kiểm tra xem có mở được file không 
    {
        cout << "Error file!" << endl;
        exit (1);
    }

    float num;
    while (ifs >> num)
    {
        cout << num << "\t";
    }
    cout << endl;
    
    ifs.close();
}


int main ()
{
    int n;
    // nhập n phần tử tử bàn phím
    cout << "Nhap n = ";
    cin >> n; 

    float * A = new float [n]; // thực hiện cấp phát động cho mảng A gồm n phần tử

    nhap (A, n); // nhập mảng A
    write (A, n, "ABC2022.TXT"); // ghi mảng A ra tệp
    cout << "Xuat mang:" << endl;
    xuat (A, n); // xuất mảng A ra màn hình

    giamdan (A, n); // sắp xếp mảng giảm dần
    write (A, n, "ABC2022.TXT"); // ghi mảng giảm dần ra tệp

    float k = sum (A, n); // tính giá trị k
    cout << "Gia tri k = " << k << endl;

    choose(A, n); // tính tổng các phần tử không vượt quá 30

    return 0;
}
