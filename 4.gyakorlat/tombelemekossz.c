#include <stdio.h>

int elemek_osszege(const int n, const int tomb[])
{
    int ossz = 0;
    for (int i = 0; i<n; i++)
    {
        ossz += tomb[i];
    }
    return ossz;
}

int main()
{
    int szamok[10] = { 47, 46, 45, 44, 43, 3, 2, 1, 66, 56 };// vagy siman szamok[]={ 47, 46, 45, 44, 43, 3, 2, 1, 66, 56 };

    int meret = 10;
    
    int osszeg = elemek_osszege(meret, szamok);
    printf("Összeg: %d\n", osszeg);
    return 0;
}