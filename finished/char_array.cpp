#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
using namespace std;

int main()
{
// 1. khởi tạo và khai báo mảng kí tự
   // cách 1: khai báo thông thường
   char s[20] = {'1', '2', '3', 'q', 'u', 'a', 'n', 'g'};
   cout << s << endl;
   // cách 2: khai báo dùng con trỏ
   char * s;
   s = new char [10];
   // gán phần tử theo index
   s[0] = '1';
   s[2] = 'e';
   s[3] = '3';
   s[4] = '\0'; // luôn luôn phải khai báo phần tuer null ở cuối chuỗi kí tự
   cout << s << endl;
   delete [] s;


   // 2. khai báo hằng chuỗi
   char s[] = "hello world";
   cout << s << endl;
   
// 3. kiểm tra kích thước của chuỗi (tự chạy chương trình và so sánh 2 trường hợp dưới đây)
   // TH1. trường hợp không khai báo kích thước
   char s[] = "tong dang quang";
   cout << "sizelen = " << strlen(s) << endl; // trả về kích thước chuỗi không chứa kí tự \0 - NULL
   cout << "sizeof = " << sizeof(s) << endl; // trả về kích thước chuỗi có chứa kí tự \0 - NULL
   cout << "size = " << size(s) << endl; // trả về kích thước chuỗi có chứa kí tự \0 - NULL
   // TH2. trường hợp có khai báo kích thước
   char s[100] = "tong dang quang";
   cout << "sizelen = " << strlen(s) << endl; // trả về kích thước chuỗi không chứa kí tự \0 - NULL
   cout << "sizeof = " << sizeof(s) << endl; // trả về kích thước chuỗi có chứa kí tự \0 - NULL
   cout << "size = " << size(s) << endl; // trả về kích thước chuỗi có chứa kí tự \0 - NULL
   
// 4. sao chép mảng kí tự
   // sao chép nguyên 1 mảng kí tự
   char s1[] = "hello world";
   char s2[20];
   strcpy_s(s2, sizeof(s2), s1);
   cout << "s1: " << s1 <<endl;
   cout << "s2: " << s2 << endl;
   // sao chép n kí tự đầu tiên (dưới đây n = 4)
   char s1[] = "1234567";
   char s2[20];
   strncpy_s(s2, sizeof(s2), s1, 4);
   cout << "s1: " << s1 << endl;
   cout << "s2: " << s2 << endl;
   // hoặc cũng có thể như thế này 
   char s[100];
   strcpy(s, "hello world");
   cout << s << endl;

// 5. ghép chuỗi
   char s1[100] = "tong dang quang";
   char s2[100] = "dai hoc cong nghiep";
   strcat(s1, s2); // ghép chuỗi s2 vào chuỗi s1
   strcat(s2, s1); // ghép chuỗi s1 vào chuỗi s2
   cout << "s1 = " << s1 << endl;
   cout << "s2 = " << s2 << endl;
   // cũng có thể như này
   strcat(s1, "hello world");
   cout << "s1: " << s1 << endl;
   // ghép n kí tự đầu tiên của mảng này vào mảng khác (dưới dây n = 4)
   strncat_s(s2, sizeof(s2), s1, 4);
   cout << "s1: " << s1 << endl;
   cout << "s2: " << s2 << endl;
}

// 6. nhập chuỗi kí tự từ bàn phím
   // sử dụng hàm gets() để nhập chuỗi không giới hạn kí tự
void nhap_str(char s[100])
{
   cout << "nhap chuoi s: ";
   fflush(stdin);
   gets(s);
}
   // sử dụng hàm getline() để nhập chuỗi có giới hạn kí tự
void nhap(char s[100])
{
   cout << "moi nhap chuoi: ";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   cin.getline(s, 100);

} 
   // sử dụng hàm get() để nhập chuỗi có giới hạn kí tự
void nhap(char s[100])
{
   cout << "nhap chuoi s: ";
   fflush(stdin);
   cin.get(s, 100);
}
// 7. xuất chuỗi kí từ ra màn hình
void xuat(char s[100])
{
   cout << "s = " << s << endl;
}

// 8. so sánh 2 chuỗi
void cmp(char s1[100], char s2[100])
{
   int n = strcmp (s1, s2);
   cout << "n = " << n << endl;
   if (n > 0)
      cout << "chuoi s1 lon hon chuoi s2" << endl;
   else if (n == 0)
      cout << "chuoi s1 bang chuoi s2" << endl;
   else 
      cout << "chuoi s1 nho hon chuoi s2" << endl;
}

// 9. tìm kiếm trong chuỗi kí tự
void tim(char s[100])
{
   char* kt, tt;
   cout << "nhap ki tu can tim kiem: ";
   cin >> kt;

   tt = strchr(s, kt);
   if (tt == NULL)
      cout << "khong tim thay!" << endl;
   else 
      cout << "tim thay tai vi tri index " << tt - s << endl;
}
int main()
{
// 10. viết hoa
   // viết hoa 1 kí tự
   char a = toupper('A'); // viết hoa một kí tự
   char a2 = toupper(97); // sử dụng số trong bảng mã ASCII
   int x = (int)(a); // in ra số tứ tự của kí tự trong bảng mã ASCII
   
   // viết hoa chuỗi kí tự
   int max = 20;
   char s[max];
   cout << "nhap chuoi: ";
   fflush(stdin);
   gets(s);
   cout << "chuoi vua nhap: " << s << endl;
   for (int i = 0; i < strlen(s); i++)
   {
      s[i] = toupper(s[i]);
   }
   cout << "chuoi sau khi thay doi: " << s << endl;

// 11. viết thường
   // viết thường 1 kí tự
   char a3 = tolower('A'); // viết thường một kí tự
   char a4 = tolower(97); // sử dụng số trong bảng mã ASCII

   // viết thường chuỗi kí tự
   int max = 20;
   char s[max];
   cout << "nhap chuoi: ";
   fflush(stdin);
   gets(s);
   cout << "chuoi vua nhap: " << s << endl;
   for (int i = 0; i < strlen(s); i++)
   {
      s[i] = tolower(s[i]);
   }
   cout << "chuoi sau khi thay doi: " << s << endl;
}

// 12. in tất cả các chữ cái từ A - Z
   // in hoa
   for (char c = 'A'; c <= 'Z'; c++) 
   {
      cout << c;
   }
   // in thường