#include <iostream> // tệp chứa các phương thức vào/ra
#include <math.h> // tệp chứa các hàm toán học
using namespace std
int main()
{
    int th;
    cout << "Cho biet ngay thang can tinh: " ; cin >> th ;
    switch (th){
        case 1: case 3: case 5: case 7: case 8: case 10:
        case 12: cout << "Thang nay co 31 ngay." ; break ;
        case 2: cout << "Thang nay co 28 ngay." ; break;
        case 4: case 6: case 9:
        case 11: cout << "Thang co 30 ngay." ; break;
        default: cout << "Ban da nhap sai. Hay nhap lai.";
    }
}
