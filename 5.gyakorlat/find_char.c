#include <stdio.h>
#include "prog1.h"
#include <string.h>

int find_char(string s, const char c)
{
    
    for (int i = 0; s[i]!='\0'; i++)
    {
        if (s[i] == c)
        {
            return i; //Ezen az indexen van
        }
    }
    return -1; //Nincsen benne
}

int contains_char(string s, const char c)
{
    if (find_char(s,c) == -1)
    {
        return 0;
    }
    return 1;
 //vagy return find_char(s,c) == -1 ? 0 : 1;    
}

int main()
{
    string s = get_string("Kerem a szot: ");
    char c = 'c';
    int result = find_char(s,c);
    int er = contains_char(s,c);
    printf("%s\n", er ? "igaz" : "hamis");
    printf("%d\n", result);

}