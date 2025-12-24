#include <wiringPi.h>

void sig_handler (int signo)
{
    if (signo == sigint)
    {
        printf("received "ctr+c)" \n");
        digitalwrite(17, 0);
        pinmode(17, input);
    }
}

int main(void)
{

}