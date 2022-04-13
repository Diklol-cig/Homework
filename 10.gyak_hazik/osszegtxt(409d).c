#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

int main()
{
    char* fajlnev = "szamok.txt";

    char sor[MAX];

    FILE *fp = fopen(fajlnev, "r");

    double sum = 0;

    while (fgets(sor, MAX, fp) != NULL)
    {
        //sum++;
        //printf("%d : %d",sor[0], sor[1]);
        sor[1] = '.';
        sum += (double)atof(sor);
        //printf("#%s\n", sor);
        //printf("@%.20lf\n", sum);
    }
    printf("%.20lf", sum);
    fclose(fp);

    return 0;
}