#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // xuất giới hạn các kiểu dữ liệu
    cout << "max cua kieu int la: " << INT_MAX << endl;
    cout << "min cua kieu int la: " << INT_MIN << endl;
    cout << "max cua kieu short la: " << SHRT_MAX << endl;
    cout << "min cua kieu short la: " << INT_MIN << endl;

    // khai báo
    int toan;
    float diem_van;
    double tien_luong;
    // khai báo nhiều biến có cùng kiểu dữ liệu
    int x, y, z;

    // khởi tạo
    bool check = true;
    char a = 'b';
    int b = 72;
    float c = 5.5f;
    short test = 5000;
    cout << "gia tri cua test la: " << test << endl;
    
    // kiểm tra kiểu dữ kiệu của biến
    cout << typeid(a).name();
}