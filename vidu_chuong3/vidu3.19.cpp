#include <stdio.h>
#include<conio.h>
using namespace std;
int sum(int a, int b){
    return (a+b);
}

int main()
{
    int a = 2, b = 3;
    int s;
    s = sum(a, b); // Gán giá trị là tổng a và b cho s
    cout << "Tong cua a va b: " << s << endl;
    return 0;
}