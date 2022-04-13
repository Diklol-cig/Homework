#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

int get_number_of_lines(char* name)
{
    int counter = 0;
    char sor[MAX];
    FILE *fp = fopen(name, "r");


    if (fp == NULL)
    {
        fprintf(stderr, "Hiba! A %s-t nem lehetett megnyitni!",  name);
        exit(1);
    }
    //else
    while (fgets(sor, MAX, fp) != NULL)
    {
        counter++;
    }

    fclose(fp);
    
    return counter;

}

int main(int argc, char* argv[])
{
    char sor[MAX];
    
    if (argc < 2)
    {
        puts("Adj meg egy fajlnevet!");
        exit (1);
    }
    char* name = argv[1];
    
    int eredmeny = get_number_of_lines(name);

    printf("%d", eredmeny);

    return 0;
}