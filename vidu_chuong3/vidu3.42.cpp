#include <stdio.h>
#include<conio.h>
using namespace std;

int main()
{
        FILE *f1, *f2;
        clrscr();

        f1 = fopen("D:\\Baihat.txt", "rt");
        f2 = fopen("D:\\Baica.txzt", "wt");

        if (f1 != NULL && f2 != NULL)
        {
            int ch = fgetc(f1);
            while (! feof(f1))
            {
                fputc(ch, f2);
                ch = fgetc(f1);
            }
            fcloseall();
        }

        getch();
        return 0;
}

