#include <stdio.h>
#include<conio.h>
using namespace std;

int main()
{
        FILE *f;
        clrscr();
        f=fopen("D:\\Baihat.txt","r+");
        if (f!=NULL)
        {
                fputs("Em oi Ha Noi pho.\n",f);
                fputs("Ta con em, mui hoang lan; ",f);
                fclose(f); 
        }
        getch();
        return 0;
}
