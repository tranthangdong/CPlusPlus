#include <iostream> // tệp chứa các phương thức vào/ra
#include <math.h> // tệp chứa các hàm toán học
using namespace std
int main()
{
    float a, b, c; // khai báo các hệ số
    float delta;
    float x1, x2; // 2 nghiem
    cout << "Nhap a, b, c:\n"; cin >> a >> b >> c; //a ≠ 0
    delta = b*b - 4*a*c;
    if (delta < 0) cout << "ph. trinh vo nghiem\n";
    else if (delta==0)
        cout<< “ph. Trinh co nghiem kep:” << -b/(2*a) << '\n';
    else{
        x1 = (-b+sqrt(delta))/(2*a);
        x2 = (-b-sqrt(delta))/(2*a);
        cout << “nghiem 1 = " << x1 << " va nghiem 2 = " << x2;
    }    
}