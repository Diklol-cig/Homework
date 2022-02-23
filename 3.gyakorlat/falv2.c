#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    //int spaces = n-i;
    /*for (int i=1; i<=x;i++)
    {
        for (int j=1; j<=i; j++)
        {
            for (int spaces=x-i; spaces>=j; spaces--){
                    printf(" ");
            }
                printf("#");
        }
        printf("\n");
    }*/
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
    printf("\n");
    }
}