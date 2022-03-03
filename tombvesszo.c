#include <stdio.h>

int main()
{
    int tomb[]={1, 2, 3, 4, 5, 6, 7, 8 };
    int meret = 8;

    for (int i = 0; i<meret; i++)
    {
        if (i<meret-1){
        printf("%d, ", tomb[i]);
        }
        else{
            printf("%d",tomb[i]);
        }
    }
}