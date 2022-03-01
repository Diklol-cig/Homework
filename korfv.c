#include <stdio.h>
#include <math.h>

double kerulet(int x)
{
    return 2*x*M_PI;
}

double terulet(int y)
{
    return M_PI*y*y;
}

int main()
{ 
    int sugar; 
    scanf("%d", &sugar);
    printf("%d\n",sugar);
    double k = kerulet(sugar);
    double t = terulet(sugar);
    printf("Kerulet: %.2lf\nTerulet: %.2lf\n", k, t);

}