#include <stdio.h>


int main(){
    int x;
    printf("Kérem a magasságot: ");
    scanf("%d", &x);
    for (int i = 1; i<=x; i++){
        int spaces = x-i;
        int hash = i;
        for (int k = 1; k<=spaces; k++)
            {
            printf(" ");
            }  
                for (int c = 1; c<=hash; c++)
                {
                    printf("#");
                }
                printf(" ");
                
                for (int masodik= 0; masodik<i; masodik++)
                {
                    printf("#");
                }

    printf("\n");
    }
}