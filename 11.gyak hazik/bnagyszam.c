#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define MAX 1024

const long KB = 1024;
const long MB = 1024 * KB;

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int array[], int low, int high) {
  
  int pivot = array[high];
  
  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
      i++;
      
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);
  
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    
    int pi = partition(array, low, high);
    
    quickSort(array, low, pi - 1);
    
    quickSort(array, pi + 1, high);
  }
}

void tombkiiras(const int n, const int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        if (i != n-1)
        {
            printf("%d\n", tomb[i]);
        }
        else
        {
            printf("%d\n", tomb[i]);
        }   
    }
    
}

int main(int argc, char* argv[])
{

    char* fname = "millions.txt";
    FILE *fp = fopen(fname, "r");
    char line[MAX];
    int *szamok = malloc(3000000*sizeof(int));
    if (szamok == NULL)
    {-
        fprintf(stderr, "Szar az egész!\n");
        exit(1);
    }
    int i = 0;
    while(fgets(line, MAX, fp) != NULL)
    {
        szamok[i] = atoi(line);
        i++;
    }
    fclose(fp);
    printf("# Fájl bezárva. Sok fós kiiratása\n");
    quickSort(szamok, 0, i);
    tombkiiras(i, szamok);

    free(szamok);
    return 0;
}