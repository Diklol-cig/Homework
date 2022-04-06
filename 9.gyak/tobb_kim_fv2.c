#include <stdio.h>

typedef struct{
    int a;
    int b;
}pairII;

pairII get_primes()
{
    //return 2 and 3
    pairII pair = {2,3};

    return pair;
}


int main()
{
    pairII result = get_primes();
    printf("%d, %d\n", result.a, result.b);

    return 0;
}