#include <stdio.h>

int main()
{
    int i,j,k;
    int nagysag;
    
    
    do{
      printf("Kerem a gyemant nagysagat: ");
      scanf("%d", &nagysag);
    }while(nagysag%2!=1);

    for (i=0; i<nagysag; i++)
    {
        for (j=0; j<nagysag-i; j++)
        {
            printf(" ");
        }
        for (k=0;k<=i; k++)
        {
            printf(" *");
        }
        printf("\n");
    }

    for (i=nagysag-2; i>=0; i--)
    {
        for(j=0; j<nagysag-i; j++)
        {
            printf(" ");
        }
        for (k=0; k<=i; k++)
        {
            printf(" *");
        }
        printf("\n");
    }
}