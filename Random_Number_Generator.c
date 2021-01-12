#include <stdio.h>
#include <time.h>

int main ()
{
    time_t seconds;

    seconds = time(NULL);
    seconds = seconds%10;
    printf("Random Number between 0 - 9 :\n%ld\n", seconds);

    return(0);
}
