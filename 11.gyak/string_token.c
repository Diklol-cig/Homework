#include <string.h>
#include <stdio.h>

int main()
{
    char sor[] = "aa bbb cc d asd";
    //strtok modositani fogja a stringet(Csak modosithatora lehet meghivni)
    char *p;

    p = strtok(sor, ",;");
    /*printf ("%s\n", p);
    p = strtok(NULL, " ");
    printf ("%s\n", p);
    p = strtok(NULL, " ");
    printf ("%s\n", p);
    p = strtok(NULL, " ");
    printf ("%s\n", p); // lehet while ciklussal is megoldani mert a végén NULL-t ad */

    while(p!=NULL)
    {
        puts(p);
        p= strtok(NULL,";,");
    }
    return 0;
}