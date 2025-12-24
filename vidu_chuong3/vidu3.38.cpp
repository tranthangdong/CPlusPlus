#include <stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
typedef struct
{
        float Thuc;
        float Ao;
} SoPhuc;

/* Ham in so phuc len man hinh*/
void InSoPhuc(SoPhuc p)
{
        printf("%.2f + i%.2f\n",p.Thuc,p.Ao);
}
void main()
{
        SoPhuc p1, p2, p;
        printf("Nhap so phuc thu nhat:\n");
        printf("Phan thuc: ");
        scanf("%f", &p1.Thuc);
        printf("Phan ao: ");
        scanf("%f", &p1.Ao);
        printf("Nhap so phuc thu hai:\n");
        printf("Phan thuc: ");
        scanf("%f", &p2.Thuc);
        printf("Phan ao: ");
        scanf("%f", &p2.Ao);
        printf("So phuc thu nhat: ");
        InSoPhuc(p1);
        printf("So phuc thu hai: ");
        InSoPhuc(p2);
        p.Thuc = p1.Thuc + p2.Thuc;
        p.Ao   = p1.Ao   + p2.Ao;
        printf("Tong 2 so phuc: ");
        InSoPhuc(p);
        getch();
}