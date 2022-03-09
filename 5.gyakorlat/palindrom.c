#include <stdio.h>
#include "prog1.h"
#include <string.h>

//Megvizsgalja, hogy palindrom-e a string
int is_pali(string s) 
{
    int i= 0;
    int j= strlen(s)-1;

    while (i<j)
    {
        if (s[i]!=s[j])
        {
            return 0; //hamis
        }
        i++;
        j--;
    }

    return 1;//igaz
}

int main()
{
    string s = get_string("Kerem a szot: ");
    int result = is_pali(s);
    printf("%s az egy palindrom? %s\n",s, result ? "igen" : "nem");


}