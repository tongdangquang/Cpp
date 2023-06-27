#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// hàm ghi file
void write(const string& filename) 
{
    ofstream file(filename);
    if (file.is_open()) 
    { 
        string line;
        cout << "Nhap du lieu (nhap 'end' de thoat):" << endl;

        while (getline(cin, line)) // Đọc dữ liệu từ bàn phím
        { 
            if (line == "end") // Kiểm tra điều kiện kết thúc
            {
                break;
            }
            file << line << endl; // Ghi dữ liệu vào file
        }

        file.close(); // Đóng file sau khi ghi xong
    }

    else
    {
        cout << "Khong the mo file!" << std::endl;
    }
}

// hàm đọc file
void read(const string& filename) 
{
    ifstream file(filename); // Mở file để đọc
    if (file.is_open()) 
    {
        string line;
        cout << "Du lieu trong file: " << endl;
        while (getline(file, line)) // Đọc dữ liệu từ file
        {
            cout << line << endl;
        }

        file.close();
    }
    
    else
    {
        cout << "Khong the mo file!" << endl;
    }
}

int main() {
    string filename = "text.txt";
    write(filename);
    read (filename);
    return 0;
}
