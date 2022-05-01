#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1024

typedef struct{
    int *arr;
    int size;

}Data;

int da_sum(Data *self)
{
    int sum = 0;

    for (int i = 0; i<self->size; i++)
    {
        sum+= self->arr[i];
    }
    return sum;
}

double da_avg(Data *self)
{
    
   int sum = da_sum(self);
   return sum/(double)self->size;
}

Data get_file_content(char* filename)
{
    FILE *fp = fopen(filename, "r");
    Data data;
    if(fp == NULL)
    {
            puts("Error");
            exit(1);
    }
    
    char sor[MAX];
    
    int *dyn_arr = NULL;
    int dyn_size = 0;

    while ( fgets(sor, MAX, fp) != NULL)
    {
        dyn_arr = realloc(dyn_arr, (dyn_size + 1) * sizeof(int));
        sor[strlen(sor)-1] = '\0';
        dyn_arr[dyn_size] = atoi(sor);
        dyn_size++;
    }
    fclose(fp);
    
    
    
    data.arr = dyn_arr;
    data.size = dyn_size;

    return data;
}

int main()
{
    Data bejovo = get_file_content("numbers.txt");

    int *dyn_arr = bejovo.arr;
    int dyn_size = bejovo.size;

    printf("Atlag %.3lf\n", da_avg(&bejovo));

    return 0;
}