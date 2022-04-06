#include <stdio.h>

//VÁRHATÓ ILYEN FELADAT ZH-N

void get_primes(int *p1, int *p2)
{
    *p1=2;  
    *p2=3;  
}

int main()
{

    int a,b;

    get_primes(&a,&b);

    printf("%d, %d\n", a, b); //Ezt szeretnem: 2, 3
}