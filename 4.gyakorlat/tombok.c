#include <stdio.h>


void tomb_kiir(int n, int tomb[])
{
    for (int i =0; i< n; i++)
    {
        printf("%d, ", tomb[i]);

    }
    puts("");

    tomb[0] = 99;
}

int main()
{
    int szamok[10] = { 47, 46, 45, 44, 43, 3, 2, 1, 66, 56 };// vagy siman szamok[]={ 47, 46, 45, 44, 43, 3, 2, 1, 66, 56 };

    int meret = 10;
    printf("Elotte: %d\n", szamok[0]);
    tomb_kiir(meret, szamok);
    printf("Utana: %d\n", szamok[0]);
    return 0;
}