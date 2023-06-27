#include <iostream>
#include <string.h>
#include <conio.h>
#include <math.h>
using namespace std;

struct address
{
// khai báo biến thành viên - thuộc tính
    char sonha[10];
    char tenduong[100];
    char tinhthanh[100];
};

struct sinhvien
{
    char hoten[100];
    char maSV[20];
    bool gioitinh;
    address diachinha; // cấu trúc chứa cấu trúc
} sv1, sv2; // khai báo biến cấu trúc

int main ()
{
// tạo ra các đối tượng của cấu trúc sinhvien
    sinhvien sv3;
    sinhvien sv4;
// gán giá trị cho biến cấu trúc
    // cách 1:
    sv1 = {{"Tong Dang Quang"}, {"2022603783"}, {true}, {{"123"}, {"Ngo Gia Tu"}, {"Ha Nam"}}};

    // cách 2:
    strcpy_s(sv2.hoten, sizeof(sv2.hoten), "Tong Dang Quang");
    strcpy_s(sv2.maSV, sizeof(sv2.maSV), "2022603783");
    sv2.gioitinh = false;
    //strcpy_s(sv2.diachinha, sizeof(sv2.diachinha), ("123", "Ngo Gia Tu", "Ha Nam"));

// truy cập đến các biến thành viên (thuộc tính cấu trúc)
    cout << "Thong tin sv1: " << endl;
    cout << "Ho ten: " << sv1.hoten << endl;
    cout << "Ma SV: " << sv1.maSV << endl;
    cout << "Gioi tinh: " << (sv1.gioitinh == true ? "nam" : "nu") << endl;
    cout << "So nha: " << sv1.diachinha.sonha << endl;
    cout << "Ten duong: " << sv1.diachinha.tenduong << endl;
    cout << "Tinh thanh: " << sv1.diachinha.tinhthanh << endl;

    cout << "-----------------------------" << endl;

    cout << "Thong tin sv2: " << endl;
    cout << "Ho ten: " << sv2.hoten << endl;
    cout << "Ma SV: " << sv2.maSV << endl;
    cout << "Gioi tinh: " << (sv2.gioitinh == true ? "nam" : "nu") << endl; 
}

// MẢNG CẤU TRÚC
struct sv
{
    int ma;
    char hoten[100];
};

void nhap (sv lst[], int &n)
{
    cout << "nhap so luong sinh vien: ";
    cin >> n;
    // cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cout << "nhap thong tin cho sinh vien " << i + 1 << endl;
        cout << "nhap ma SV: ";
        cin >> lst[i].ma;
        cin.ignore();
        cout << "nhap ten: ";
        cin.getline(lst[i].hoten, sizeof(lst[i].hoten));
    }
}
void xuat(sv lst[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << lst[i].ma << "\t" << lst[i].hoten << endl;
    }
}
int main ()
{
    int n = 4; // chỗ này bắt buộc phải khai báo n ko thì code sẽ chạy vĩnh viễn mà không dừng ở số lượng yêu cầu
    sv lst[n];
    nhap(lst, n);
    cout << "danh sach sinh vien la:" << endl;
    xuat (lst, n);
}

// CON TRỎ CẤU TRÚC
struct sinhvien 
{
    int ma;
    char ten[100];
};
int main ()
{
// khai báo con trỏ bình thường với kiểu dữ liệu cơ sở
    int* sv = new int;
    
// khởi tạo đối tượng thông thường của cấu trúc sinhvien
    sinhvien sv1 = {100, "tong dang quang"};
// truy xuất đến biến thành viên của biến cấu trúc thông thường
    cout << "Ma sv1: " << sv1.ma << endl;
    cout << "Ho ten sv1: " << sv1.ten << endl;

// khởi tạo đối tượng dùng con trỏ cấu trúc
    sinhvien* sv2 = new sinhvien;
    *sv2 = {200, "quang tong dang"};
// truy xuất đến biến thành viên đối với con trỏ thì dùng dấu "->" thay dấu "." như biến thông thường
    cout << "Ma sv2: " << sv2 -> ma << endl;
    cout << "Ho ten sv2: " << sv2 -> ten << endl;

// gán biến con trỏ cấu trúc vào địa chỉ biến thông thường
    sinhvien* sv3 = &sv1;
// truy xuất thông tin thì biến sv3 sẽ lấy toàn bộ dữ liệu của biến sv1
    cout << "Ma sv3: " << sv3 -> ma << endl;
    cout << "Ho ten sv3: " << sv3 -> ten << endl;
    
// xóa biến con trỏ
    delete sv2;
}







// MỘT VÀI PHƯƠNG THỨC TRONG STRUCT
struct Person 
{
    string name;
    int age;
// phương thức display() dùng để hiển thị thông tin của struct
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

// phương thức changeName dùng để thiết lập giá trị ban đầu cho các thành viên
    void changeName(const string &newName, int a)
    {
        name = newName;
        age = a;
    }

// phương thức hủy để giải phóng tài nguyên khi một đối tượng bị hủy (phương thức này sẽ tự động chạy mà không cần khai báo trong main())
    ~Person ()
    {
        // giải phóng tài nguyên
        cout << "Huy " << name << endl;
    }
};

int main() {
// Sử dụng phương thức display()
    Person person;
    person.name = "John";
    person.age = 25;
    person.display();

    cout << endl;

// Sử dụng phương thức changeName()
    person.changeName("Alice", 14);
    person.display();
}

