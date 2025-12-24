#include <stdio.h>
#include<conio.h>
using namespace std;
void Swap1(int param1, int param2)
{
        int temp = param1;
        param1 = param2;
        param2 = temp;

}

void Swap2(int& param1, int& param2)
{
        int temp = param1;
        param1 = param2;
        param2 = temp;
}

int main()
{
        int a = 1024;
        int b = 2048;
        cout << "a = " << a << ", b = " << b << endl;
       
        cout << "Swap1: ";
        Swap1(a, b);
        cout << "a = " << a << ", b = " << b << endl;

        cout << "Swap2: ";
        Swap2(a, b);
        cout << "a = " << a << ", b = " << b << endl;

        return 0;

}