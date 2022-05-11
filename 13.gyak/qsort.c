#include <stdio.h>
#include <stdlib.h>

void kiir(int n, int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", tomb[i]);
    }
}

int cmp(const void *bal, const void *jobb)
{
    const int *a = bal;  //Lehet de nem kell a (const int)bal;
    const int *b = jobb;

    return *a-*b;
} // ha bal kisebb mint a jobb akkor negatív érték
// ha bal == jobb 0
// ha bal nagyobb mint jobb akkor pozitív érték

int main()
{
    int szamok[] = {88, 56, 100, 2, 25};
    int meret = sizeof(szamok) / sizeof(szamok[0]);

    kiir(meret, szamok);

    qsort(szamok, meret, sizeof(int), cmp);

    puts("");
    kiir(meret, szamok);
}