#include <stdio.h>
#include <stdlib.h>

int tombcontain(int meret, int tomb[], int szam)
{
    for (int i=0; i<meret; i++)
    {
        if (szam==tomb[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    printf("Hany db random szamot kersz? \n");
    int szam;
    scanf("%d", &szam);
    int min, max;
    printf("Add meg kerlek az also, majd a felso korlatot: ");
    scanf("%d", &min);
    scanf("%d", &max);
    int diff=max-min;
    int tomb[diff];
    for (int j=0; j<diff; j++)
    {
        tomb[j]=0;
    }
    int counter=0;
    
    while(counter<szam)
    {
        int number= rand() %(max-min);
        if(tombcontain(max-min, tomb, number))
        {

        }
        else
        {
           tomb[number-1]=number;
        counter++; 
        }
    }
    for (int i=0; i<max-min; i++)
    {
        if(tomb[i]!=0)
        {
            printf("%d ", tomb[i]);
        }
    }
    puts(" ");
    return 0;
}