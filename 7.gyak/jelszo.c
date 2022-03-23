#include <stdio.h>
#include "prog1.h"
#include <string.h>
#include <ctype.h>

#define MAX 200

int is_strong(string x)
{
    int length = strlen(x);
    int long_enough = (length >= 8);
    int has_uppercase = 0;
    int has_lowercase = 0;
    int has_digit = 0;

    for (int i = 0; i<length; i++)
    {
        char c = x[i];
        if (islower(c)){
            has_lowercase = 1;
        }
        if (isupper(c)){
            has_uppercase = 1;
        }
        if (isdigit(c)){
            has_digit = 1;
        }
    }
    return long_enough && has_uppercase && has_lowercase && has_digit;

}

int main()
{
    char text[MAX];

    while(1){
        
        printf("Kerek jelszot: ");
        
        fgets(text, MAX, stdin);
        text[strlen(text)-1] = '\0';
        
        int eredmeny = 1;//is_strong(text);
        
        if (eredmeny = 1)
        {
            puts("JO jelszo");
        }
        else
        {
            puts("Nem jo");
        }
    
        if (strcmp(text, "*"))
        {
            break;
        }
    }
}     
