#include <stdio.h>

int main(){
    
    int x;
    int p_menny = 0;
    int n_menny =0;
    
    while(1){
        printf("Kérek egy egesz szamot(kilepes:0): ");
        scanf("%d", &x);
        if (x==0)
        { 
            break;
        }
        
        if (x>0)
        {
            p_menny++;
        }
    
        else if (x<0) 
        {
            n_menny++;
        }

        
    }
    
    printf("pozitivak: %d\n",p_menny);
    printf("negativak: %d\n", n_menny);
}