#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int szam=100;
    int negyzetszum = 0;
    int szumnegyzet = 0;

    for (int i=0; i<=szam; i++)
    {
        negyzetszum=i*i+negyzetszum;
        szumnegyzet = szumnegyzet+i;
    }
    szumnegyzet=szumnegyzet*szumnegyzet;
    printf("negyzetszum: %d szumnegyzet: %d \n", negyzetszum, szumnegyzet);

    int kulonbseg=0;
    kulonbseg=szumnegyzet-negyzetszum;
    printf("%d a kulonseg \n", kulonbseg);
        return 0;
}