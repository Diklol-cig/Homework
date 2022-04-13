#include <stdio.h>
#include <stdlib.h>

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

void tomb(int tomb[],int *min, int *max, double *avg)
{
    double sum = 0;
    for (int i = 0; i < 10; i++) {      
       if(tomb[i] < *min)    
           *min = tomb[i];   
    }
    for (int i = 0; i < 10; i++) {      
       if(tomb[i] > *max)    
           *max = tomb[i];   
    }
    for(int i = 0; i < 10; i++)
    {
        sum += tomb[i];
    }
    *avg = sum / 10;

}

int main()
{
    
    srand(56);
    int arr[10];
    feltolt(arr);
    kiir(arr);
    int min, max = arr[0];
    double avg;
    tomb(arr,&min, &max, &avg);
    printf("\nmin: %d, max: %d, avg: %.2lf\n", min, max, avg);
}