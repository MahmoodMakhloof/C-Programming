#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay_s (char sec)
{
    unsigned int mytime;
    mytime =time(NULL)+sec;
    while(time(NULL)<mytime);
}

void show_clock_date ()
{
    time_t t=time(NULL);
    struct tm* tim=localtime(&t);
    printf("\r%0.2d/%0.2d/%4d - ",tim->tm_mday,tim->tm_mon+1,tim->tm_year+1900);
    printf("%0.2d:%0.2d:%0.2d",tim->tm_hour,tim->tm_min,tim->tm_sec);
    delay_s(1);
}

int main()
{
    while(1)
    {
        show_clock_date();
    }
}
