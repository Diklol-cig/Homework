#include <stdio.h>

//Megoldas 
//#define N 10
//És akkor az elofeldolgozo megoldja a problemat

int main()
{
    int meret = 10;
    int tomb[meret] = {0};         // = {2, 3, 4, 5, 6, 7, 8 , 9, 1, 56};


    for (int i =0; i<meret; i++)
    {
        printf("%d\n", tomb[i]);
    }
    puts(" ");
}