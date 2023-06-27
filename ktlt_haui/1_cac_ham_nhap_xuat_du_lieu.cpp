#include <iostream>
using namespace std;
int main ()
{
    // 1. hàm cout được dùng để xuất dự liệu ra màn hình
    cout << "Hello world!" << endl;

    // 2. hàm printf được sử dụng để xuất dữ liệu ra màn hình hoặc tập tin, với định dạng được quy định bởi chuỗi định dạng.
    printf("My name is %s and I am %d years old.", "Quang", 19);

    // 3. hàm puts được sử dụng để xuất một chuỗi ký tự ra màn hình và tự động thêm dấu xuống dòng
    puts("Hello world!");

    // 4. hàm fputs được sử dụng để xuất một chuỗi ký tự ra một tệp tin
    FILE* file = fopen("myfile.txt", "w");
    fputs("Hello world!", file);
    fclose(file);

    // 5. hàm puts được sử dụng để xuất một ký tự ra màn hình hoặc tập tin
    char c = 'a';
    putchar (c);

    // 6. (hàm nhập dữ liệu) hàm scanf() được sủ dụng để nhập dữ liệu từ bàn phím
    // cú pháp hàm scanf: scanf(format, &variable1, &variable2, ...);
    // ví dụ về hàm scanf(), phương thức hoạt động tương đối giống hàm (cin >>)
    char a[100];
    cout << "nhap 1 so nguyen: ";
    scanf("%s",a);
    cout << "so nguyen ban vua nhap la: " << a << endl;
    // hàm fgets tương tự như hàm scanf(), nhưng hàm fgets cho phép nhập chuỗi ký tự có dấu cách còn scanf thì không

}

/*
    MỘT SÔ MÃ ĐỊNH DẠNG DỮ LIỆU THƯỜNG DÙNG TRONG HÀM printf
    1. %d: dữ liệu số nguyên kiểu char, int, unsigned int, unsigned
    2. %ld: dữ liệu số nguyên kiểu long, unsigned long
    3. %f: dữ liệu số thực kiểu float
    4. %lf: dữ liệu số thực kiểu double, long double
    5. %c: dữ liệu ký tự kiểu char (mặc định)
    6. %s: dữ liệu chuỗi ký tự
    ...
*/


int main ()
{
	int n;
	float x;
	char c;
	char s[20];
	std::string str(30, '-');

	printf ("nhap so nguyen n = ");
	scanf ("%d", &n);
	printf ("so nguyen n vua nhap: n = %d \n", n);
	printf("%s\n", str.c_str());

	printf ("nhap so thuc x = ");
	scanf ("%f", &x);
	printf ("so thuc vua nhap la: x = %f\n", x);
	printf ("%s\n", str.c_str());

	printf ("nhap mot ki tu c = ");
	scanf ( " %c", &c);
	printf ("ki tu ban vua nhap la: c = %c\n", c);
	printf ("%s\n", str.c_str());

	printf ("nhap chuoi s: ");
	scanf (" %[^\n]", s);
	printf ("chuoi vua nhap la: %s\n", s);
	printf ("%s\n", str.c_str());
}
