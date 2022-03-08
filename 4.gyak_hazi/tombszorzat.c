#include <stdio.h>

long szorzas(const int meret, const int tomb[])
{
    int szorzat = 1;

    for (int i = 0; i<meret; i++)
    {
        szorzat *= tomb[i];
    }
    return szorzat;
}

int main()
{
    int szamok[] = {56, -64, 1, -2, 3, -4, 5};
    int meret = 7;

    printf("A tagok szorzata: %ld\n", szorzas(meret, szamok));
}