#include "prog1.h"
#include <stdio.h>
#include <string.h>

/*

Bemenet: sztringeket tartalmazó tömb. Számoljuk meg, hogy a bemenetben
hány olyan sztring van, melynek a hossza legalább 2 s az
első karaktere egyezik az utolsó karakterével. A visszatérési
érték ezen feltételeket kielégítő sztringek száma legyen.

Példák (Python kóddal, majd át kell írni C-be):

match_ends(["aba", "xyz", "aa", "x", "bbb"])    ->  3
match_ends(["", "x", "xy", "xyx", "xx"])        ->  2
match_ends(["aaa", "be", "abc", "hello"])       ->  1

*/

int match_ends(int n, string s[])
{
    int count = 0;
    int len = strlen(s[i]);
    for (int i = 0; i < n; i++)
    {
        if (len>1 && s[i][0] == s[i][len-1])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string szavak1[] = { "aba", "xyz", "aa", "x", "bbb" };
    int meret = 5;

    printf("Hany jo szo: %d\n", match_ends(meret, szavak1));

    for (int i = 0; i < meret; ++i)
    {
        puts(szavak1[i]);
    }

    return 0;
}