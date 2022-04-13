#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

int main()
{
    //char* s = "hello"; // const char* s = "hello"; így tudatni lehet hogy nem modosithato, így nem fog lefordulni
    // Ez sem Heap sem Stack, hanem egy külön részen jön létre
    char s[] = "hello";
    //char s[] = {'H' , 'e', 'l', 'l', 'o', '\0' }; //Ez már a stacken jön létre
    
    s[0] = 'H';

    puts(s);

    return 0; // nem lesz jo, mert csak olvashato helyen van a string

}
