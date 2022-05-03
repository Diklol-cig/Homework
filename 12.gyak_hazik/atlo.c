#include <stdio.h>
void mellekatlo (int n, int matrix[n][n])
{
    int tmp=n-1;
    for(int i=0; i<n; i++){
       printf("%d ", matrix[i][tmp]);
       tmp--;
    }
    puts(" ");
}
int main()
{
    int matrix[6][6]={
        {1, 255, 123, 8564, 75, 656},
        {1561, 256563, 3, 55644, 554, 66},
        {1565, 22, 331, 194, 455, 62},
        {11, 222, 356, 478, 455, 16},
        {115, 256, 311, 4, 78565, 61655},
        {1, 2256, 13, 44, 56565, 86}
    };
    int sorok=6;
    mellekatlo(sorok,matrix);

    return 0;
}