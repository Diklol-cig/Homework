#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

typedef char* string;

typedef struct {
    char name[20];
    int kor;
    char szak[5];
} hallgato;

void my_tolower(char text[])
{
    int hossz = strlen(text);
    for (int i = 0; i<hossz; i++)
    {
        text[i] = tolower(text[i]);
    }
}

int strcmpi(const string s1, const string s2)
{

string copy1 = strdup(s1);
string copy2 = strdup(s2);

my_tolower(copy1);
my_tolower(copy2);

int result = strcmp(copy1, copy2);

free(copy1);
free(copy2);

return result;
}

int feltolt(char* fname, int n, hallgato tomb[])
{
    int index = 0;

    FILE *fp = fopen(fname, "r");
    char line[MAX];
    char *p;

    string nev;
    int kor;
    string szak;

    while (fgets(line, MAX, fp) != NULL)
    {
        line[strlen(line)-1]='\0';

        p = strtok(line, ",");
        nev = p;
        p = strtok(NULL, ",");
        kor = atoi(p);
        p = strtok(NULL, ",");
        p = szak;

        
        hallgato h;
        strcpy(h.name, nev);
        h.kor = kor;
        strcpy(h.szak, szak);

        tomb[index] = h;
        index++;

    }
    
    fclose(fp);

    return index;
}

void print_hallgatok(hallgato h)
{
    printf("%s %d %s", h.name, h.kor, h.szak);
}

int cmp(const void *bal, const void *jobb)
{
    const hallgato *a = bal;  //Lehet de nem kell a (const int)bal;
    const hallgato *b = jobb;

    return strcmp(a->name, b->name);
}

int main()
{
    const char* fname = "hallgatok.csv";

    hallgato tomb[MAX];

    int elemszam = feltolt(fname, MAX, tomb);
    printf("%d", elemszam);

    for (int i = 0; i<elemszam; i++)
    {
    //print_hallgatok();
    }

    qsort(tomb, elemszam, sizeof(hallgato), cmp);
}