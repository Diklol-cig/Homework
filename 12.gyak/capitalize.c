#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef char* string;

void my_tolower(string text)
{
    int hossz = strlen(text);
    for (int i = 0; i<hossz; i++)
    {
        text[i] = tolower(text[i]);
    }
}

void jo_nev (string nev)
{
    int hossz = strlen(nev);
    if (hossz == 0){
        return;
    }
    my_tolower(nev);
    nev[0] = toupper(nev[0]);
}

string capitalize (const string Szo)
{
    string nev = strdup(Szo);
    int hossz = strlen(nev);
    if(hossz == 0)
    {
        return NULL;
    }

    if (islower(nev[0]))
    {
        nev[0] -= 32;
    }
         
    for (int i= 1; nev[i]!= '\0'; i++)
    {
       if (isupper(nev[i]))
        {
            nev[i] += 32;
        }
    }
    return nev;
}

int main()
{
    string nev = "sZeEeP";

    printf("1: %s\n", capitalize(nev));
    jo_nev(nev);

    printf("2: %s", nev);
}