#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ora_generator()
{
    int ora = rand() % 24;

    return ora;    
}

int perc_generator()
{
    int perc = rand() % 60;
    return perc;
}

void kiir(int ora, int perc)
{
    char ido[5];
    ido[0] = ora / 10 + 48;
    ido[1] = ora % 10 + 48;
    ido[2] = ':';
    ido[3] = perc / 10 + 48;
    ido[4] = perc % 10 + 48;

    //printf("\n%d:%d\n", ora, perc);
    for (int i = 0; i<5; i++)
    {
        printf("%c", ido[i]);
    }
        if (ora == 0 && perc == 0)
        {
            puts("ejfel");
        }
        else if (ora<12)
        {
            puts(" (delelott)");
        }
        else if (ora == 12 && perc == 0)
        {
            puts(" (del)");
        }
        else if (ora>12)
        {
            puts(" (delutan)");
        }
    
    
}

int main()
{
    srand(time(NULL));
    for (int i = 0; i<100; i++){
    int ora = ora_generator();
    int perc = perc_generator();
    kiir(ora, perc);
    }
}