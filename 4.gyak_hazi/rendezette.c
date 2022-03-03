#include <stdio.h>

int rend(const int meret, const int tomb[])
{
    for (int i = 0; i<meret; i++)
    {
        if(!(tomb[i]<tomb[i+1]))
        {
            return 0;
        }
        return 1;
    }
}

int main()
{
    
    int szamok[] = {56, -64, 1, -2, 3, -4, 5};
    int joszamok[] = {1, 2, 3, 4, 5, 6, 7};
    int meret = 7;

    int rendezette = rend(meret, joszamok);
    printf("rendezett-e: %d\n", rendezette);
}