#include <stdio.h>

int my_abs(int x){
        if (x<0){
            return -x;
        }
            return x;
}


int main()
{
    int szamok[] = {56, -64, 1, -2, 3, -4, 5};
    int meret = 7;

    for (int i = 0; i<meret; i++)
    {
        printf("%d ", szamok[i]);
    }
    puts(" ");
    for (int i = 0; i<meret; i++)
    {
        printf("%d ", my_abs(szamok[i]));
    }
}