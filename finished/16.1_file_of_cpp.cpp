#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
// 1. mở file
    fstream fs; // ifstream la đọc file, ofstream là ghi file
    // mở file khi file text và file code nằm trong cùng một folder (file cùng cấp)
    fs.open("text.txt");

    // mở file không cùng cấp (khác folder)
    fs.open("C:\\Users\\ADMIN\\Desktop\\file_hoc_lieu\\C++\\source_code_c++\\text.txt");

    // kiểm tra xem file đã mở được chưa
    if (fs.is_open())
        cout << "mo file thanh cong" << endl;
    else
        cout << "mo file khong thanh cong" << endl;

// 2. ghi file
    fs << "tong dang quang" << endl;
    fs << 100 << endl;

// 3. đọc file
    string name;
    int n;
    getline(fs, name); // sử dụng getline(fs, name) để gán dữ liệu trong file vào biến name
    //getline(cin, name); // sử dụng getline(cin, name) để nhập dữ liệu vào biến name (không được nhầm lẫn với dòng trên)
    fs >> n;

    cout << "Name: " << name << endl;
    cout << "Age:  " << n << endl;

    // sử dụng vòng lặp while để đọc
    string name;
    int x;
    while (getline (fs, name) && fs >> x)
    {
        cout << name << endl;
        cout << x << endl;
    }

// 4. các chế độ (mode) khi làm việc với file
    fs.open("text.txt", ios::in); // mở file ở chế độ đọc nếu file đã tồn tại
    fs.open("text.txt", ios::out); // mở file ở chế độ ghi và xóa hết nội dung trong file, nếu file không tồn tại thì sẽ tạo file
    fs.open("text.txt", ios::trunc); // mở file ở chế độ ghi và xóa hết trong file, nếu file không tông tại thì sẽ tạo file
    fs.open("text.txt", ios::app); // mở file ở chế độ ghi và sẽ ghi ở cuối chứ không xóa các dữ liệu cũ
    fs.open("text.txt", ios::ate); // mở file và di chuyển con trỏ chuột xuống dưới file
    fs.open("text.txt", ios::binary); // làm việc với file nhị phân

    // mở 2 chế độ cùng lúc
    fs.open("text.txt", ios::in | ios::ate);

    // đóng file
    fs.close();


// 5. làm việc với file nhị phân binary
    ofstream ofs;
    ofs.open("text.bin", ios::binary);

    // ghi file
    int n = 8;
    ofs.write((char*)&n, sizeof(int));
    ofs.close();

    // đọc file
    ifstream ifs;
    ifs.open("text.bin", ios::binary);
    
    int read_n;
    ifs.read((char*)&read_n, sizeof(int));
    cout << "read_n = " << read_n << endl;
}