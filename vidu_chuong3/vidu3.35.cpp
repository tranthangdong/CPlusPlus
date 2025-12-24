#include <stdio.h>
#include<conio.h>
using namespace std;
struct KieuSinhVien
{
        char MSSV[10];
        char HoTen[40];
        struct KieuNgayThang NgaySinh;
        int Phai;
        char DiaChi[40];
};
typedef struct
{
        char MSSV[10];
        char HoTen[40];
        KieuNgayThang NgaySinh;
        int Phai;
        char DiaChi[40];

} KieuSinhVien;

void main()
{

}
