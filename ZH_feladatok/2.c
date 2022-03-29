#include <stdio.h>
#include <math.h>

int prim(int x)
{
    for (int i = 2; i<x; i++)
    {
        if (x%i == 0)
        {
            return 0;
            
        }
    }
    return 1;
}


int main()
{
    int x;
    while (1)
    {
    puts("kerem a szamot: ");
    scanf("%d", &x);
    
    int test = prim(x);
        
        if (test == 1)
        {
            puts("Primszam!");
            break;
        }
        else
        {
            puts("Nem primszam!");
        }
    }

    for (int i = 1; i<=10; i++)
    {
        printf("%d x %d = %d\n", x, i, x*i);
    }
}