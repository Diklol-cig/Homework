#include <stdio.h>

int get_int(){
    int x;
    printf("n: ");
        scanf("%d", &x);
    return x;
}

int main(){
    
    int n= get_int();
    printf("%d\n", n);
}