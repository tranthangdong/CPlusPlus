#include <stdio.h>
#include<conio.h>
using namespace std;
void swap(int a, int b)
{
    int tamp = a;
    a = b;
    b = tamp;
}
int main()
{
    int a = 2, b = 3;
    cout << "Truoc khi hoan doi: " << a << ' ' << b << endl;
    swap (a, b); // hoán đổi
    cout << "Sau khi hoan doi: " << a << ' ' << b << endl;
    return 0;
}
