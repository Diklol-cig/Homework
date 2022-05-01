#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int *array;
    int size;
}Data;

double arr_avg(int dyn_size, int dyn_array[])
{
    int sum = 0;

    for(int i = 0; i < dyn_size; i++)
    {
        sum += dyn_array[i];
    }
    double avg = (double)sum / (double)dyn_size;

    return avg;
}

Data get_file_content(char* filename)
{
    FILE *fp = fopen(filename, "r");
    Data adat;

    if (fp == NULL)
    {
        puts("Nem sikerult megnyitni");
    }

    char line[1024];

    int *dyn_array = NULL; //! Ilyenkor kell a null pointer ha nem foglalunk egybol teruletet
    int dyn_size = 0;

    while(fgets(line, 1024, fp) != NULL)
    {
        dyn_array = realloc(dyn_array,(dyn_size+1) * sizeof(int));
        
        line[strlen(line)-1] = '\0';
        dyn_array[dyn_size] = atoi(line);
        dyn_size++;
    }
    fclose(fp);

    adat.array = dyn_array;
    adat.size = dyn_size;

    return adat;
}

int main(int argc, char* argv[])
{
    Data adat_megkap = get_file_content("numbers.txt");
    
    int *dyn_array = adat_megkap.array;
    int dyn_size = adat_megkap.size;
        
    printf("Atlag: %.3lf\n",arr_avg(dyn_size,dyn_array));

    return 0;
}