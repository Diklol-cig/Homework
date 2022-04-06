#include <stdio.h>

#define N 5

int tombcontain(int meret, int tomb[], int szam)
{
    for (int i=0; i<meret; i++)
    {
        if (szam==tomb[i])
        {
            return 1;
        }
    }
    return 0;
}

void kiir(int n, int tomb[])
{
    puts("Tomb: ");
    
    for (int i = 0; i< n; i++)
    {
        printf("%d ", tomb[i]);
    }
}

int main()
{
    int n = 0;
    int szamok[N];
    int szam;

    while(1)
    {
        puts("Szam: ");
        scanf("%d", &szam);
        if (!tombcontain(n, szamok, szam))
        {
            szamok[n] = szam;
            n++;
            kiir(n, szamok);
            puts(" ");
        }
        else{
            puts("Ez mar szerepelt");
            kiir(n, szamok);
            puts(" ");
        }
        if(n == 5)
        {
            break;
        }
    }

}