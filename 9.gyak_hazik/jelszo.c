#include <stdio.h>
#include <stdlib.h>
#include "prog1.h"
#include <string.h>
#include <ctype.h>


int feltetel(string password)
{
    int hossz=0, kis=0, nagy=0, szam=0;
    hossz=strlen(password);
    for (int i=0; i<hossz; i++)
    {
        if (isdigit(password[i])!=0)
        {
            szam=1;
        }
        if (islower(password[i])!=0)
        {
            kis=1;
        }
        if (isupper(password[i])!=0)
        {
            nagy=1;
        }
    }
    if(hossz>=8)
    {
        hossz=1;
    }
    else
    {
        hossz=0;
    }
    if(kis && nagy && szam && hossz)
    {
        return 1;
    }
    else
    {
        return 0;
    }   
}

int main()
{
    printf("Adj meg a '*' vegjelig jelszavakt! \n");
    while(1)
        {
        string jelszo = get_string("Jelszo: ");
        if (strcmp(jelszo, "*"))
            {
                    if(feltetel(jelszo))
                {
                    puts("Eros jelszo");
                }
                    else
                {
                    puts("Gyenge jelszo");
                }
            }
        else
        {
            break;
        }
        }
        

    return 0;
}