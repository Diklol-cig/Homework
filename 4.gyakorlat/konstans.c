#include <stdio.h>

void kiir(const int szam)
{
    //szam = 9; ezt mar nem lehet megvaltoztatni
    printf("szam: %d\n", szam);
}

int main()
{
    const int n = 5;

    kiir (n);

    //printf("n: %d\n", n);
}