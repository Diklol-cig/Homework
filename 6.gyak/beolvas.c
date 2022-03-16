//beolvasas prog1.h nelkul

#include <stdio.h>

#define SIZE 200

int main()
{
    char text[SIZE];
    printf("Mi a neved köcsög? ");

    fgets(text, SIZE, stdin);

    printf("Hello %s!\n", text);
    return 0;
}
