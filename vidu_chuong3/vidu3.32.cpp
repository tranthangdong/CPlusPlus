#include <stdio.h>
#include<conio.h>
using namespace std;

int a, *pa;
pa= (int*)malloc(sizeof(int));/*Cấp phát vùng nhớ có kích thước 2 byte*/
pa = realloc(pa, 6); /* Cấp phát lại vùng nhớ có kích thước 6 byte*/

void main()
{

}
