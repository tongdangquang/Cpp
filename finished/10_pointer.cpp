#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
using namespace std;

int main ()
{
    // khai báo biến thông thường
    int a = 100;
    // 1. xem địa chỉ ô nhớ trên ram
    cout << "dia chi o nho cua a la: " << &a << endl;
    // 2. khai báo con trỏ
    int* b;
    cout << "dia chi o nho cua b la: " << b << endl;
    // 3. cấp phát bộ nhớ
    int* c;
    c = new int;
    cout << "dia chi o nho cua c la: " << c << endl;
    // 4. gán giá trị cho biến con trỏ
    *b = 200;
    *c = 300;
    cout << "gia tri cua bien con tro b = " << *b << endl;
    cout << "gia tri cua bien con tro c = " << *c << endl;
    // 5. đưa biến con trỏ b vào ô nhớ của biến a
    b = &a;
    cout <<"dia chi o nho cua bien con tro b khi nay la: " << b << endl;
    // 6. thay đổi giá trị con trỏ pt
    cout << "gia tri cua bien con tri b truoc thay doi: " << *b << endl;
    *b = 500;
    cout << "gia tri cua bien con tro b sau thay doi: " << *b << endl;
    // 7. con trỏ void. con trỏ void là con trỏ có thể gán ô nhớ mà không quan trọng kiểu dữ liệu.
    // khi này biến con trỏ void sẽ mang địa chỉ ô nhớ của biến cuối cùng được truyền vào.
    int x; float y;
    void* z;
    z = &x;
    z = &y;
    cout << "dia chi o nho cua bien x: " << &x << endl;
    cout << "dia chi o nho cua bien y: " << &y << endl;
    cout << "dia chi o nho cua bien z: " << z << endl;
    // gán giá trị cho biến con trỏ void
    *(int*)z = 1000;
    cout << "gia tri cua bien con tro void z = " << *(int*)z << endl;
    // con trỏ không trỏ đến bất kì đối tượng nào
    int *ptr = nullptr;
    if (ptr == nullptr)
    {
        cout << "con tro khong tro den doi tuong nao" << endl;
    }
    // 9. xóa dữ liệu, địa chỉ ô nhớ các biến con trỏ
    delete b, c, z;
}