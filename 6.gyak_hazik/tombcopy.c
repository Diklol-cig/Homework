#include <stdio.h>
#include <stdlib.h>
#include "prog1.h"
#include <math.h>

void masol(int t[], int copy[], int x)
{
    for (int i = 0; i<x; i++)
    {
        copy[i] = t[i];
    }
}

void kiir(int t[], int x)
{
    for (int i = 0; i<x; i++)
    {
        printf("%d\n", t[i]);
    }
}

void tomb_abs(int t[], int x)
{
    for (int i = 0; i<x; i++)
    {
        t[i] = abs(t[i]);
    }
}

int main()
{
    int x;
    puts("Hany szamot akarsz? ");
    scanf("%d", &x);
    int t[x];

    for (int i = 0; i<x; i++)
    {
        scanf("%d", &t[i]);
    }
    puts("-----");

    int uj[x];
    masol(t, uj, x);

    
    
    tomb_abs(uj, x);
    kiir(uj, x);
    puts("___");
    kiir(t, x);

}