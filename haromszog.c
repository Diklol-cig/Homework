#include <stdio.h>

int valid_triangle(int x, int y, int z)
{
    if (x+y<z || y+z<x || x+z<y )
    {
    return 0;
    }
    return 1;
}

int main()
{
    int a,b,c;

    printf("Elso oldal: ");
    scanf("%d", &a);
    printf("Masodik oldal: ");
    scanf("%d", &b);
    printf("Harmadik oldal: ");
    scanf("%d", &c);

    int eredmeny = valid_triangle(a,b,c);
    printf("Megrajzolhto-e: %d\n", eredmeny);
}