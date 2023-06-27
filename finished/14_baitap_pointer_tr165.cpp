#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;

// Bài 1:
int main ()
{
	int a;
	float x;
	cout << "nhap a = "; cin >> a;
	cout << "nhap x = "; cin >> x;
	cout << "gia tri cua a = " << a << endl;
	cout << "dia chi cua a = " << &a << endl;
	cout << "gia tri cua x = " << x << endl;
	cout << "dia chi cua x = " << &x << endl;
	
	int * m = &a;
	float * n = &x;
	cout << "gia tri cua m = " << *m << endl;
	cout << "dia chi cua m = " << m << endl;
	cout << "gia tri cua n = " << *n << endl;
	cout << "dia chi cua n = " << n << endl;

	delete m, n;
}




// Bài 2:
// hàm nhập mảng con trỏ
void nhap(int * m, int &n)
{
	cout << "nhap so phan tu cho mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "nhap m[" << i << "] = " ;
		cin >> m[i];
	}
}
// hàm xuất mảng con trỏ
void xuat (int * m, int n)
{
	cout <<"xuat mang: ";
	for (int i = 0; i < n; i++)
	{
		cout << m[i] << " ";
	}
	cout << endl;
}

// hàm tìm giá trị chẵn lớn nhất trong mảng
void max_element(int * m, int n)
{
	int max = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if (m[i] % 2 == 0 && m[i] > max)
		{
			max = m[i];
		}
	}
	if (max == INT_MIN)
	{
		cout << "mang khong chua gia tri can tim" << endl;
	}
	else 
	{
		cout << "gia tri max = " << max << endl;
	}
}
// hàm sắp xếp mảng giảm dần
void giam(int * m, int n)
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
// hàm thực thi
int main ()
{
	int n;
	int* m = new int[n];
	nhap (m, n);
	xuat (m, n);
	max_element(m, n);
	giam(m, n);
	xuat (m, n);
	delete [] m;
}




// Bài 3: 
// hàm nhập matrix
void nhap (int ** &m, int &d, int &c)
{
	cout << "nhap so dong cho matrix: "; cin >> d;
	cout << "nhap so cot cho matrix: "; cin >> c;
	for (int i = 0; i < d; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "nhap m[" << i << "][" << j << "] = ";
			cin >> m[i][j];
		}
	}
}

// hàm xuất matrix
void xuat (int ** m, int d, int c)
{
	cout << "xuat matrix: " << endl;
	for (int i = 0; i < d; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
}

// hàm xóa con trỏ
void xoa (int ** m, int d, int c)
{
	for (int i = 0; i < d; i++)
	{
		delete m[i];
	}
	delete[] m;
}

// hàm tính tổng dòng đầu của matrix
void tong (int ** m, int d, int c)
{
	int sum = 0;
	cout << "dong dau cua matrix: ";
	for (int i = 0; i < c; i++)
	{
		sum += m[0][i];
		cout << m[0][i] << " ";
	}
	cout << endl;
	cout << "tong cac phan tu cua dong dau: " << sum << endl;
}

// hàm tìm giá trị âm lớn nhất trong mảng
void find(int ** m, int d, int c)
{
	int max = INT_MIN;
	for (int i = 0; i < d; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (m[i][j] < 0 && max < m[i][j])
			{
					max = m[i][j];
			}
		}
	}
	if (max == INT_MIN)
		{
			cout << "matrix khong chua gia tri am" << endl;
		}
	else 
		{
			cout << "gia tri am lon nhat trong matrix la: " << max << endl;
		}
}

// hàn biến đổi ma trận thành ma trận chuyển vị
void chuyenvi (int ** m, int d, int c)
{
	for (int i = 0; i < d; i++)
	{
		for (int j = i + 1; j < c; j++)
		{
			int t = m[i][j];
			m[i][j] = m[j][i];
			m[j][i] = t;
		}
	}
}

// hàm thực thi
int main ()
{
	int d, c;
	int ** m = new int *[d];
	// cấp phát bộ nhớ
	for (int i = 0; i < d; i++)
	{
		m[i] = new int [c];
	}

	nhap (m, d, c);
	xuat (m, d, c);
	chuyenvi (m, d, c);
	find (m, d, c);
	tong (m, d, c);
	xuat (m, d, c);
	xoa (m, d, c);
}


// Bài 4:
// hàm nhập n
void nhap (int &n)
{
	do
	{
		cout << "nhap n sao cho 1 <= n <= 20: ";
		cin >> n;
		if (n < 1 || n > 20)
		{
			cout << "nhap lai n" << endl;
		}
	} while (n < 1 || n > 20);
}

// hàm nhập dãy số
void array (int *m, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "nhap m[" << i << "] = ";
		cin >> m[i];
	}
}

// hàm hiển thị dãy số
void xuat (int *m, int n)
{
	cout << "day so: ";
	for (int i = 0; i < n; i++)
	{
		cout << m[i] << " ";
	}
	cout << endl;
}
// hàm in ra các số có giá trị tuyệt đối lớn hơn số dương nhỏ nhất của dãy và vị trí của các số đó 
// hàm dưới này chưa hoàn thành
void find (int * m, int n)
{
	int min = m[0];
	for (int i = 0; i < n; i++)
	{
		if (m[i] >= 0 && m[i] < min)
		{
			min = m[i];
		}
	}
	cout << "min = " << min << endl;
	for (int i = 0; i < n; i++)
	{
		if (abs(m[i]) >= min)
		{
			cout << m[i] << " thuoc " << i << endl;
		}
	}
}

// hàm sắp xếp dãy số giảm dần
void giam (int * m, int n)
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
int main ()
{
	int n;
	int * m = new int [n];
	nhap(n);
	array (m, n);
	xuat (m, n);
	giam (m, n);
	xuat (m, n);
	delete[] m;
}