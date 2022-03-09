#include "prog1.h"
#include <stdio.h>
#include <string.h>

int main()
{
    string s = get_string("Kerem a nevedet: ");
    printf("Szia , %s!\n", s);
    int n = strlen(s);
    printf("Hossz: %d\n", n);
}