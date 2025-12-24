#include <iostream> // tệp chứa các phương thức vào/ra
using namespace std;
int main()
{
    int nam;"nam = "; cin >> nam;
    if (((nam%4 == 0) && (nam%100 !=0)) || (nam%400 == 0))
        cout << nam << "la nam nhuan";
    else
        cout << nam << "la nam khong nhuan";
}
