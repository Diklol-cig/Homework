#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

char ranlc()
{
    return ((rand() % ('z' - 'a' + 1)) + 'a');
}
char ranhc()
{
    return ((rand() % ('Z' - 'A' + 1)) + 'A');
}
char ranint()
{
    return ((rand() % ('9' - '0' + 1)) + '0');
}
char ranspec()
{
    int n = rand() % 4;
    switch (n)
    {
    case 0:
        return '.';
        break;
    case 1:
        return ',';
        break;
    case 2:
        return ';';
        break;
    case 3:
        return '\'';
    default:
        fprintf(stderr, "HOW DO YOU DO THIS\n");
        exit(2);
        break;
    }
}

int main()
{
    srand(time(NULL));
    char *pw = malloc(12);
    int n = (rand() %(12 - 8 + 1)) + 8;
    for (int i = 0; i < n; i++)
    {
        int j = rand() % 4;
        switch (j)
        {
        case 0:
            pw[i] = ranlc();
            if (i != 0 && (pw[i] >= 'a' && pw[i] <= 'z') && (pw[i-1] >= 'a' && pw[i-1] <= 'z'))
            {
                i--;
            }
            
            break;
        case 1:
            pw[i] = ranhc();
            if (i != 0 && (pw[i] >= 'A' && pw[i] <= 'Z') && (pw[i-1] >= 'A' && pw[i-1] <= 'Z'))
            {
                i--;
            }
            break;
        case 2:
            pw[i] = ranint();
            if (i != 0 && (pw[i] >= '0' && pw[i] <= '9') && (pw[i-1] >= '0' && pw[i-1] <= '9'))
            {
                i--;
            }
            break;
        case 3: 
            pw[i] = ranspec();
            if (i != 0 && ((pw[i] == '.') || (pw[i] == ',') || (pw[i] == ';') || 
            (pw[i-1] == '\'') && (pw[i-1] == '.') || (pw[i-1] == ',') || (pw[i-1] == ';') || (pw[i-1] == '\'')))
            {
                i--;
            }
            
            break;
        
        default:
            fprintf(stderr, "What have you done?\n");
            exit(1);
            break;
        }
        
    }
    printf("%s\n", pw);
    free(pw);
    return 0;
}