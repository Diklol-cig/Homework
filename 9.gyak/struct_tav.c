#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    int x;
    int y;
} pont;

double tav(pont p1, pont p2)
{
    double tav = 0;
    int a = abs(p1.x-p2.x);
    int b = abs(p1.y-p2.y);
    tav = sqrt((a*a)+(b*b));

    return tav;
}

int main()
{
    pont a = {1,2};
    pont b = {6,5};
    printf("Tavolsag: %lf\n", tav(a,b));

}