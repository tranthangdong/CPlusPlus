#include <stdio.h>
#include <iomanip>
#include<conio.h>
using namespace std;
void xmh(int);
double luythua(float x, int n);
main() // tính giá trị 2x3 - 5x2 - 4x + 1
{
    float x ; // tên biến có thể trùng với đối của hàm
    double f ; // để lưu kết quả
    printf("x = ");
    scanf("%f" ,&x );
    f = 2*luythua(x,3) - 5*luythua(x,2) - 4*x + 1;
    xmh(100); // xoá thật sạch màn hình 100 lần
    printf("%d",f);
    getch();
    return 0;
    double luythua(float x, int n) // trả lại giá trị xn
    {
        int i; // biến chỉ số
        double kq = 1; // để lưu kết quả
        for (i=1; i<=n; i++) kq *= x;
        return kq;
    }
    void xmh(int n) // xoá màn hình n lần
    {
        int i;
        for (i=1; i<=n; i++) system("cls");
             Return;
    }
}

// Ví dụ hàm sau tìm số lớn nhất trong 2 số nguyên:
//     int max(int a, int b) 
//     {
//         return (a > b) ? a: b ; 
//     }