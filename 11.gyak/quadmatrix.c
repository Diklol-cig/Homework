#include <stdio.h>

void kiir_matrix(int n, int matrix[][n])
{
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<n; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        puts("");
    }
}

int main()
{

    int matrix[][6] = {
        {1,2,3,4,5,6},
        {1,3,4,6,8,56},
        {56,57,58,59,64,69},
        {0,0,0,1,1,1},
        {5,4,3,2,1,0},
        {56,56,56,64,64,64}
    };
    

}