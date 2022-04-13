#include <stdio.h>
#include <stdlib.h>


void kiir(int n, int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", tomb[i]);
    }
}

int * sorted(const int n, const int tomb[])
{
    int * copy = malloc(n * sizeof(int));

    for (int i = 0; i<n ; i++)
    {
        copy[i] = tomb[i];
    }

    //rendezes
    int kesz = 0;
    int tmp;
    while(kesz<n)
    {
        for(int i=0;i<n;i++)
        {
            if(copy[i]>copy[i+1])
            {
                tmp = copy[i];
                copy[i] = copy[i+1];
                copy[i+1] = tmp;
            }
        }
        kesz++;
    }
    return copy;
}

int main()
{
    int tomb[] = {1, 2, 3, 4, 45, 6};
    int n = sizeof(tomb) / sizeof(tomb[0]);
    int * rendezett = sorted (n, tomb);
    puts("");
    kiir(n, tomb);
    puts(" ");
    kiir(n ,rendezett);
    //printf(tomb);
    //printf(rendezett);
    free(rendezett);
}