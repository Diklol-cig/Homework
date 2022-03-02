#include <stdio.h>

/*void ciklus(int n)
{
    int backup = n;
    while (n > 0)
    {
        puts("Hello");
        n--;
    }
    printf("Ennyiszer futott le: %d\n", backup);
}*/

// konstanssal

void ciklus(const int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Hello\n");
    }
    printf("Futasok szama: %d\n", n);
}

int main()
{
    ciklus(5);
}