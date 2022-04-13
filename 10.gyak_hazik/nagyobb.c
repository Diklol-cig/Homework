#include <stdio.h>
#include <stdlib.h>
#define SIZE 200
int main()
{
    char* fajlnev = "nagyobbmint.txt";
    FILE *f = fopen(fajlnev,"r");

    if (f == NULL)
    {
        printf("Hiba a falj megnyitasakor");
        exit(1);
    }
    printf("# %s sikeresen megnyitva\n", fajlnev);
    double tomb[SIZE];
    for (int i = 0; i < SIZE;i++){
        fscanf(f,"%lf",&tomb[i]);
        //printf("%lf\n",tomb[i]);
    }
    fclose(f);
    int count = 0;
    FILE *out = fopen("out.txt","w");
    printf("# 0,5-nel nagyobb szamok szurese..\n");
    for (int i = 0; i < SIZE; i++)
    {
        if (tomb[i] > 0.5 )
            {
                fprintf(out,"%.20*lf\n",tomb[i]);
                count++;
            }
        }
    printf("# szures vege\n");
    fclose(out);
    printf("# out.txt bezarva\n");
    printf("# out.txt-be kiirt szamok mennyisege: %d db\n", count);
    return 0;
}