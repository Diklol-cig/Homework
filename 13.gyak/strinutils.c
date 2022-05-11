#include "stringutils.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef char* string;

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