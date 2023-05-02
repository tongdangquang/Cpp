#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;

// 1. giống như các biến, hàm cũng được lưu trữ tại một địa chỉ trong bộ nhớ. ví dụ dưới đây
int func100 (int a, int b)
{
    return a + b;
}

int main ()
{
    cout << func100 << endl; // in ra địa chỉ của hàm trong bộ nhớ
    cout << func100 (12, 15) << endl; // đi đến dịa chỉ hàm func và thực thi hàm
}


// 2. khai báo con trỏ hàm
int(*fcnPtr)(int); // con trỏ hàm nhận vào 1 biến kiểu int và trả về kiểu int
void(*fcnPtr)(int, int); // con trỏ hàm nhận vào 2 biến kiểu int và trả về kiểu void


// 3. gán địa chỉ của hàm cho con trỏ hàm
// khai báo prototype
int funcA();
int funcB();
void funcC();
double funcD(int a);

int main()
{
int(*fcnPtr)() = funcA(); // lỗi, không dùng dấu ngoặc đơn () sau tên hàm
	int(*fcnPtrA)() = funcA; // ok, con trỏ fcnPtrA trỏ đến hàm funcA
	fcnPtrA = funcB; // ok, fcnPtrA có thể trỏ đến một hàm khác có cùng cấu trúc
    // fcnPtrA = &funcB; tương tự câu lệnh trên

	int(*fcnPtr1)() = funcA; // ok
	void(*fcnPtr2)() = funcA; // lỗi, kiểu trả về của con trỏ hàm và hàm không trùng nhau
	void(*fcnPtr3)() = funcC; // ok
	double(*fcnPtr4)(int) = funcD; // ok
}

// 4. gọi hàm và thực hiện hàm. xét ví dụ dưới đây để hiểu vấn đề
void swapNumber(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
    // tạo con trỏ hàm ptrSwap
	void(*ptrSwap) (int &, int &) = swapNumber;

	int a = 5, b = 10;
	cout << "Before: " << a << " " << b << endl;
    
    // có 2 cách để thực hiện lời gọi hàm
	// cách 1: gọi hàm tường minh
    // giống như con trỏ thông thường ở biến, muốn lấy giá trị của biến thì phải có dấu * trước tên biến 
    // và con trỏ hàm cũng tương tự, phải có dấu sao trước tên hàm thì mới sử dụng được hàm
	(*ptrSwap)(a, b); 
	cout << "After:  " << a << " " << b << endl;

	// cách 2: hoặc gọi hàm ngầm định
	ptrSwap(a, b);
	cout << "After:  " << a << " " << b << endl;

	return 0;
}
