#include <iostream> // tệp chứa các phương thức vào/ra
#include <math.h> // tệp chứa các hàm toán học
using namespace std
int main()
{
    float a, b, c ; // các toán hạng a, b và kết quả c
    char dau ; // phép toán được cho dưới dạng kí tự
    cout << "Hay nhap 2 so a, b: " ; cin >> a >> b ;
    cout << "va dau phep tan: "; cin >> dau ;
    switch (dau){
        case '+': c = a + b ; break ;
        case '-': c = a - b ; break ;
        case 'x': case '.': case '*': c = a * b ; break ;
        case ':': case '/': c = a / b ; break 
    }
    cout << std::setprecision(4); // in 4 số lẻ
    cout << "Ket qua la: " << c ;
}
