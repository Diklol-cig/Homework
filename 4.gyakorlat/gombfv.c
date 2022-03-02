#include <stdio.h>
#include <math.h>

double get_double()
{
    double value = 0;
    scanf("%lf",&value);

    return value;
}

double* gomb(double *arr)
{
    double r = arr[0];
    double felszin = 4*M_PI*r*r;
    double terfogat = (double)4/3*M_PI*r*r*r;

    arr[0] = felszin;
    arr[1] = terfogat;

    return arr;
}

int main()
{
    printf("Adja meg a gömb sugarát (cm): ");
    double sugar = get_double();

    double arr[] = {sugar,0};
    double *ptr = gomb(arr);

    printf("A gömb felszíne: %lf cm2\nA gömb térfogata: %lf cm3\n",ptr[0],ptr[1]);

    return 0;
}