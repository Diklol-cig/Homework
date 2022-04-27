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

void foatlo_kiir(int n, int m, int matrix[n][m])
{
    for (int i = 0; i<n; i++)
    {
        printf("#%d\n", matrix[i][i]);
    }
}


int main()
{
    int tomb[] ={};

    int matrix[][6] = {
        {1,2,3,4,5,6},
        {1,3,4,6,8,56},
        {56,57,58,59,64,69},
        {0,0,0,1,1,1},
        {5,4,3,2,1,0},
        {56,56,56,64,64,64}
    };

    int sor= 6;
    int oszlopok = 6;

    kiir_matrix(sor,oszlopok,matrix);
    int er = matrix_sum(sor,oszlopok,matrix);
    foatlo_kiir(sor, oszlopok, matrix);
    printf("SUM: %d\n", er);
    puts("END");
}