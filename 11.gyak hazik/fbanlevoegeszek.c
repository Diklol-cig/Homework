#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 1024

typedef char* string;

void sort(const int n, int tomb[])
{
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (tomb[j+1]< tomb[j])
            {
                temp = tomb[j];
                tomb[j] = tomb[j+1];
                tomb[j+1] = temp;
            }
            
        }
        
    }
}

void tombkiiras(const int n, const int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        if (i != n-1)
        {
            printf("%d\n", tomb[i]);
        }
        else
        {
            printf("%d\n", tomb[i]);
        }   
    }
    
}

int main(int argc, string argv[])
{

    string fajlnev = "ossz.txt";
    char sor[MAX];
    int szamok[1000] = {0};
    
    //printf("%s",fajlnev);

    FILE *fp = fopen(fajlnev, "r");

    int i = 0;

    while (fgets(sor, MAX, fp) != NULL)
    {
        szamok[i] = atoi(sor);
        i++;
    }

    sort(i, szamok);
    tombkiiras(i,szamok);

    puts("Asd");
    fclose(fp);
}