#include <stdio.h>
#include <math.h>
#include <fstream>
using namespace std;

int main ()
{
// Tạo file và mở file (nếu file chưa có thì sẽ tự động tạo)
    FILE * f;
    f = fopen("file.txt", "w");
    if (f == NULL)
    {
        printf("mo file khong thanh cong");
        return 1; // return 1 để biết là chương trình bị lỗi không mở được file
    }

// Ghi file
    char name [30];
    int n;
    printf ("Nhap name: ");
    scanf ("%[^\n]", name);
    printf ("Nhap tuoi: ");
    scanf ("%d", &n);

    fprintf (f, "%s\n%d", name, n);

// Đóng file
    fclose(f);

//  LƯU Ý: CÓ THỂ MỞ CHỈ CẦN MỞ FILE 1 LẦN CŨNG ĐƯỢC, NHƯNG NẾU MỞ FILE 2 LẦN THÌ PHẢI ĐÓNG 2 LẦN

    FILE * t;
    t = fopen("file.txt", "r");
    if (f == NULL)
    {
        printf("mo file khong thanh cong");
        return 1;
    }

// Đọc file
    char s[30];
    int x;
    fscanf (t, "%[^\n]", s);
    fscanf (t, "%d", &x);

    printf ("Name: %s\n", s);
    printf ("Age: %d\n", x);

// Đóng file
    fclose(t);
}

// NHỮNG CHẾ ĐỘ LÀM VIỆC VỚI FILE
/*
1. Chế độ "r" (Read): Mở file để đọc. File phải tồn tại; nếu không, việc mở file sẽ thất bại.

2. Chế độ "w" (Write): Mở file để ghi. Nếu file không tồn tại, nó sẽ được tạo mới. 
   Nếu file đã tồn tại, nội dung của file sẽ bị ghi đè. Nếu việc mở file thành công, nội dung mới sẽ bắt đầu từ đầu file.

3. Chế độ "a" (Append): Mở file để ghi ở cuối file. Nếu file không tồn tại, nó sẽ được tạo mới. 
   Nếu việc mở file thành công, việc ghi dữ liệu mới sẽ được thêm vào cuối file, không ghi đè lên nội dung hiện có.

4. Chế độ "r+" (Read/Write): Mở file để đọc và ghi. File phải tồn tại; nếu không, việc mở file sẽ thất bại. 
   Dữ liệu có thể được đọc và ghi từ bất kỳ vị trí nào trong file.

5. Chế độ "w+" (Read/Write): Mở file để đọc và ghi. Nếu file không tồn tại, nó sẽ được tạo mới. Nếu file đã tồn tại, 
   nội dung của file sẽ bị ghi đè. Nội dung mới sẽ bắt đầu từ đầu file. Dữ liệu có thể được đọc và ghi từ bất kỳ vị trí nào trong file.
   
6. Chế độ "a+" (Append/Read): Mở file để ghi ở cuối file và đọc. Nếu file không tồn tại, nó sẽ được tạo mới. 
   Dữ liệu mới được ghi vào cuối file. Dữ liệu cũ có thể được đọc từ bất kỳ vị trí nào trong file.
*/