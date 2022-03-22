#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 200

int main()
{
    puts("Adj meg szavakat '*' végjelig!");

    char text[SIZE];
    int max = 0;
    int count = 0;

    while(1)
    {
        printf("Szó: ");
        fgets(text,SIZE,stdin);

        if(strlen(text)-1 == 1 && text[0] == '*')
        {
            break;
        }
        else
        {
            count++;
            if(strlen(text) > max)
            {
                max = strlen(text)-1;
            }
        }
    }

    printf("%d db szót adtál meg. A leghosszabb %d karakterből áll.",count,max);

    return 0;
}