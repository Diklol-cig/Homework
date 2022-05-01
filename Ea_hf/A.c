#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    FILE *fp = fopen("numbers.txt", "w");

    for (int i = 0; i<100; i++)
    {   
        fprintf(fp, "%d\n",(rand() % 90) + 10);
    }
    fclose(fp);
    return 0;
}