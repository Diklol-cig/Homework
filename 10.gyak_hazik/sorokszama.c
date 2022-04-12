#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

/*int get_number_of_lines(FILE fp)
{
    int counter = 0;
    char sor1[MAX];
    
    while (fgets(sor1, MAX, fp) != NULL)
    {
        //sor[strlen(sor)-1] = '\0';
        //printf("%s\n", sor);
        counter++;
    }
    return counter;
}*/

int main(int argc, char* argv[])
{
    char sor[MAX];
    FILE *fp = fopen(argv[1], "r");
    
    if (argc < 1)
    {
        puts("Adj meg egy fajlnevet!");
        exit (1);
    }
    char* name = argv[1];
    if (fp == NULL)
    {
        printf("Hiba! A %s-t nem lehetett megnyitni!",  argv[1]);
        exit(1);
    }
    
int counter = 0;
    while (fgets(sor, MAX, fp) != NULL)
    {
        //sor[strlen(sor)-1] = '\0';
        //printf("%s\n", sor);
        counter++;
    }
    printf("%d", counter);
    //get_number_of_lines(fp);
    fclose(fp);
    return 0;

}