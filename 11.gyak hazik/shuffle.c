#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void shuffle(const int n, int tomb[])
{
    int tmp;
    int j;
    for (int i = n-1; i > 0; i--)
    {
        j = rand()%i;
        tmp = tomb[j];
        tomb[j] = tomb[i];
        tomb[i] = tmp;
    }
    
}

void tombkiiras(const int n, const int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        if (i != n-1)
        {
            printf("%d, ", tomb[i]);
        }
        else
        {
            printf("%d\n", tomb[i]);
        }   
    }
    
}

int main()
{
    srand(time(NULL));
    int szamok[] = {45, 84, 36, 57, 65,  43, 56, 17};
    int n = sizeof(szamok) / sizeof(int);
    printf("Sima tomb: ");
    tombkiiras(n, szamok);
    printf("Kevert tomb: ");
    shuffle(n, szamok);
    tombkiiras(n, szamok);
    return 0;
}