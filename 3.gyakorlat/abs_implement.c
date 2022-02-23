#include <stdio.h>

int my_abs(int x){
        if (x<0){
            return -x;
        }
            return x;
}
int main(){
     int x;
        printf("szam: ");
        scanf("%d", &x);

    int result = my_abs(x);
    printf("%d\n", result);

}