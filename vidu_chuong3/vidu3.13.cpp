#include <stdio.h>
#include<conio.h>
using namespace std;
int main ()
{
    double luythua(float x, int n){
        int i ; // biến chỉ số
        double kq = 1 ; // để lưu kết quả
        for (i=1; i<=n; i++)
            kq *= x;
        return kq;
    }
    
}