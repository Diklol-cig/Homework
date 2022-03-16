//beolvasas prog1.h nelkul

#include <stdio.h>
#include <string.h>

#define SIZE 200

int main()
{
    char text[SIZE];
    printf("Mi a neved köcsög? ");

    fgets(text, SIZE, stdin);
    text[strlen(text)-1]= '\0';

    printf("Hello %s!\n", text);
    return 0;
}
