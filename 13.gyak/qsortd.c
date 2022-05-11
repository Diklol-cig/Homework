#include <stdio.h>
#include <stdlib.h>

void kiir(int n, double tomb[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%.2lf, ", tomb[i]);
    }
}

int cmp_d(const void *bal, const void *jobb)
{
    const double *a = bal;  //Lehet de nem kell a (const int)bal;
    const double *b = jobb;

    if (*a>*b){
        return 1;
    }
    else if(*a<*b)
    {
        return -1;
    }
    else{
        return 0;
    }
} // ha bal kisebb mint a jobb akkor negatív érték
// ha bal == jobb 0
// ha bal nagyobb mint jobb akkor pozitív érték

int main()
{
    double szamok[] = {88.69, 56.69, 100.69, 2.69, 25.69, 1.1, 1.2,};
    int meret = sizeof(szamok) / sizeof(szamok[0]);

    kiir(meret, szamok);

    qsort(szamok, meret, sizeof(double), cmp_d);

    puts("");
    kiir(meret, szamok);
}