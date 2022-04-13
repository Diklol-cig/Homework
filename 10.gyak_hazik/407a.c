#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int min;
    int max;
    double avg;

} x;

void kiir(int tomb[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", tomb[i]);
    }
}

void feltolt(int tomb[])
{
    for (int i = 0; i<10; i++)
    {
        tomb[i] = rand() % 89 + 10;
    }
}

x cucc(int arr[], x p)
{
    double szum = 0;
    p.min = arr[0];
    p.max = arr[0];
    
    for (int i = 0; i < 10; i++)
    {
        if(arr[i] < p.min)
        {
            //printf("#%d\n", p.min);
            p.min = arr[i];

        }
    }

    for (int i = 0; i < 10; i++)
    {
        if(arr[i] > p.max)
        {
            //printf("@%d\n", p.max);
            p.max = arr[i];
        }
    }

    for (int i = 0; i < 10; i++)
    {
        szum += arr[i];
    }
    p.avg = szum / 10;

    return p;

}

int main()
{
    
    srand(56);
    int arr[10];
    feltolt(arr);
    kiir(arr);
    x p;
    x ki = cucc(arr, p);
    printf("\nmin: %d max: %d avg:%.2lf", ki.min, ki.max, ki.avg);
    
    //printf("min: %d, max: %d, avg: %.2lf\n", p.min, p.max, p.avg);
    //printf("min: %d, max: %d, avg: %.2lf\n", p.min, p.max, p.avg);
}