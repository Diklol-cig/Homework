#include <stdio.h>

int terulet(int x, int y)
{
   return x*y;
}

int kerulet (int z, int d)
{
    return 2*(z+d);
}

int main()
{
    int szelesseg, magassag;

    printf("Kerem a szelesseget: ");
        scanf("%d", &szelesseg);
    
    printf("Kerem a magassagot: ");
        scanf("%d", &magassag);

    int k = kerulet(szelesseg, magassag);
    int t = terulet(szelesseg, magassag);
    printf("kerulet: %d\nterulet: %d", k, t);
}