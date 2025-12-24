#include <conio.h>
#include <stdio.h>
using namespace std;
int main()
{
    unsigned int N;
    unsigned int Du;
    unsigned int NhiPhan[20], K = 0;
    int i;

    printf("Nhap vao so nguyen N= ");
    scanf("%d", &N);
    do
    {
        Du = N % 2;
        NhiPhan[K] = Du;
        K++;
        N = N / 2;
    }
    while (N > 0);
    printf("Dang nhi phan la: ");
    for (i = K - 1; i >= 0; i--)
        printf("%d", NhiPhan[i]);

    getch();
return 0;
}
