#include <stdio.h>

int is_even(int n)
{
    if (n % 2 == 0){
        return 1;
    }
    return 0;
}

int is_odd(int n)
{
    if (n%2==1){
        return 1;
    }
    return 0;
}

int main()
{
    int x;
    
    printf("Kerek egy egesz szamot: ");
        scanf("%d", &x);

    int paros = is_even(x);
    //int paratlan = is_odd(x);
    
    if (paros == 1){
        printf("Paros\n");
    }
    else 
    {
        printf("Paratlan\n");
    }
    
    printf("Paros?: %d\n", paros);
    //printf("Paratlan?: %d\n", paratlan);
}
