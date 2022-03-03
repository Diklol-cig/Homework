#include <stdio.h>

int max(const int meret, const int tomb[])
{
    int max = 0;
    for (int i = 0; i < meret; i++)
    {
        if (max<tomb[i])
        {
            max = tomb[i];
            //printf("%d ", max);
        }
    }
    return max;
}

int min(const int meret, const int tomb[])
{
    int min = 0;
    for (int i = 0; i < meret; i++)
    {
        if (min>tomb[i])
        {
            min = tomb[i];
            //printf("%d ", max);
        }
    }
    return min;
}

int main()
{
    int szamok[] = {56, -64, 1, -2, 3, -4, 5, 69};
    int meret = 8;

    int legn = max(meret, szamok);
    int legk = min(meret, szamok);
    printf("max: %d\nmin: %d\n", legn, legk);
}