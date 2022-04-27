#include <stdio.h>

void kiir_matrix(int sor, int oszlopok, int matrix[][oszlopok])
{
    for (int i = 0; i<sor; i++)
    {
        for (int j = 0; j<oszlopok; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        puts("");
    }
}

int matrix_sum(int sor, int oszlopok, int matrix[][oszlopok])
{
    int sum = 0;
    for (int i = 0; i<sor; i++)
    {
        for (int j = 0; j<oszlopok; j++)
        {
            sum += matrix[i][j];
        }
        
    }
    return sum;
}
int main()
{
    int tomb[] ={};

    int matrix[][6] = {
        {1,2,3,4,5,6},
        {1,3,4,6,8,56},
        {56,57,58,59,64,69},
        {0,0,0,1,1,1}
    };
    int sor= 4;
    int oszlopok = 6;

    kiir_matrix(sor,oszlopok,matrix);
    int er = matrix_sum(sor,oszlopok,matrix);
    printf("SUM: %d\n", er);
    puts("END");
}