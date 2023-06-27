#include <stdio.h>
#include <stdlib.h>

// hàm ghi file (ghi thủ công)
void write (const char * filename)
{
    FILE * f = fopen(filename, "w");
    if (f == NULL)
    {
        printf ("mo file khong thanh cong\n");
        return;
    }
// ghi thủ công
    char name[30];
    int age;
    printf ("Nhap name: ");
    scanf ("%[^\n]", name);
    printf ("Nhap age: ");
    scanf ("%d", &age);

    fprintf (f, "%s\n%d", name, age);

    fclose (f);
}

// hàm ghi file (dùng vòng lặp)
void write_2(const char * filename) 
{
    FILE* file = fopen(filename, "w");
    if (file == NULL) 
    {
        printf("Không thể mở file.\n");
        return;
    }
// có thể dùng cách này để ghi nhưng khi không muốn ghi nữa người dùng phải nhấn Ctrl + Z để kết thúc việc ghi dữ liệu
    char line [30];
    printf ("Nhap data: \n");
    while (fgets(line, sizeof(line), stdin) != NULL)
    {
        fprintf (file, "%s", line);
    }
    
    fclose(file);
}

// hàm đọc file
void read (const char* filename)
{
    FILE* f = fopen(filename, "r");
    if (f == NULL)
    {
        printf ("mo file khong thanh cong\n");
        return;
    }

    char c;
    while ((c = fgetc(f)) != EOF)
    {
        printf ("%c", c);
    }

    fclose (f);
}


int main() 
{
    write_2 ("text.txt");
    read ("text.txt");
}