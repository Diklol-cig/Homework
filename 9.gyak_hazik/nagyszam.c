#include <stdio.h>
#include "prog1.h"
#include <string.h>
#include <stdlib.h>
int main()
{
    
    string baziszam = get_string("Adj meg egy nagy szamot! \n");
    int hossz= strlen(baziszam);
    char baziszam2[hossz];
    for (int j=0; j<hossz; j++)
    {
        baziszam2[j]=baziszam[j];
    }
    int szum=0;
    int szam;

    for (int i=0; i<hossz; i++)
    {
        szam = baziszam2[i]-48;
        szum=szum+szam;
    }
    printf("A szamjegyek osszege: %d \n", szum);


    return 0;
}