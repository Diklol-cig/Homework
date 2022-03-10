#include <stdio.h>

int main()
{
    for (int i = 1; i<=20; i++)
    {
        
        if (!(i%3 == 0 || i%5 == 0))
        {
            printf("%d\n", i);
        }
        if (i%3 == 0 || i%5 == 0)
        {
            
            if (i%3 == 0 && i%5 == 0)
            {
                printf("fizzbuzz\n");
            }
            else if (i%3 == 0)
            {
                printf("fizz\n");
            }
            else if(i%5 == 0)
            {
                printf("buzz\n");
            }
            
        }
    }
}