#include <stdio.h>

typedef char* string;

void kiir_matrix(int n, int m, string szavak[n][m])
{
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<m; j++)
        {
            printf("%s\t",szavak[i][j]);
        }
        puts("");
    }
}

int main()
{
    string szavak[2][3] = {
        {"egy","keto","haom"},
        {"né","ő","haa"}
    };
    int sor = 2;
    int osz= 3;

    kiir_matrix(sor, osz,szavak);
}