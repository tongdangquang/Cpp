#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

// cau a;
// ham nhap gia tri x, y va su dung truyen tham chieu
void cau_a(float &x, float &y)
{
	cout << "nhap x = ";
	cin >> x;
	cout << "nhap y = ";
	cin >> y;
}

// cau b;
// ham tinh va tra ve khoang cach 2 diem A(xA, yA) va B(xB, yB)
float cau_b(float xA, float yA, float xB, float yB)
{
	float d = sqrt(pow(xA - xB, 2) + pow(yA - yB, 2)); // tinh khoang cach 2 diem A(xA, yA) va B(xB, yB)
	return d;
}

// cau c;
// ham tinh cac gia tri m, c va duong thang y = mx + c di qua 2 diem A(xA, yA) va B(xB, yB)
void cau_c(float xA, float yA, float xB, float yB, float &m, float &c)
{
	m = (yA - yB)/(xA - xB);
	c = yA - m*xA;
	cout << "Gia tri cua m = " << m << endl;
	cout << string(30, '-') << endl;
	cout << "Gia tri cua c = " << c << endl;
	cout << string(30, '-') << endl;
	cout << "Phuong trinh duong thang di qua 2 diem A va B la: y = " << m << "x + " << c << endl;
	cout << string (30, '-') << endl;  
}

// cau d;
// ham tinh va tra ve gia tri F(x, y, k)
float cau_d (float x, float y, int k)
{
	float F = 2023.0;
	float p = 1.0;
	float d = sqrt(pow(x - 0, 2) + pow(y - 0, 2)); // tinh khoang cach diem co toa do (x, y) den goc toa do
	// vong lap tinh gia tri F(x, y, k)
	for (int i = 1; i <= k; i++)
	{
		p *= d; // tinh so mu
		F += 1.0/p; 
	}
	return F;
}

// cau e;
// dinh nghia hang so M bang voi ma so sinh vien
#define M 2022603783
int main() {
	float xA, yA, xB, yB, m, c;
	int k;
	cau_a(xA, yA);
	cout << "Toa do diem A(" << xA << ", " << yA << ")" << endl;
	cout << string (30, '-') << endl;

	cau_a(xB, yB);
	cout << "Toa do diem B(" << xB << ", " << yB << ")" << endl;
	cout << string (30, '-') << endl;s
	cout << "Khoang cach 2 diem A va B la: dAB = " << cau_b(xA, yA, xB, yB) << endl;
	cout << string(30, '-') << endl;

	cau_c(xA, yA, xB, yB, m, c);

	k = (M % 5) + 5;
	cout << "Gia tri cua k = " << k << endl;
	cout << string (30, '-') << endl;

	cout << "Gia tri cua F(xA, yA, k) = " << fixed << setprecision(3) << cau_d(xA, yA, k) << endl;
}
