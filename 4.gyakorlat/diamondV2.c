#include <stdio.h>
#include <stdlib.h>

int paratlan(int n)
{
    return n % 2 == 1;
}

void sor_kiir(int width, int hash)
{
    int spaces_left = (width-hash)/2;
    for (int i = 0; i < spaces_left; i++)
    {
        putchar(' ');
    }
    for (int i = 0; i < hash; i++)
    {
        putchar('#');
    }
    puts("");
}

int main()
{
   
    int n = 5;

    if (!(n > 0 && paratlan(n)))
    {
        puts("Hiba, pozitiv paratlan szamot adj meg!");
        exit(1);
    }

    //ha ideerunk: 100% hogy n pozitiv és paratlan
    //nem kell else

    for (int i = 1; i<=n; i+= 2)
    {
        int space = (n-i)/2;
        printf("i: %d\n",i);
        sor_kiir(n,i);
    }

    for (int k = n-2; k>=1; k-= 2)
    {
        printf("k: %d\n", k);
        sor_kiir(n,k);
    }
}