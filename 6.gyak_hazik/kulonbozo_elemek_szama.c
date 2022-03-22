#include <stdio.h>
#define SIZE 100

int array_contains(const int arr[], const int size, const int num)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == num)
        {
            return 1;
        }
    }
    return 0;
}

int print_array(const int arr[], const int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
        if(i < size-1)
        {
            printf(", ");
        }
    }
    puts("");
}

void array_zeroes(int arr[], const int size)
{
    for(int i = 0; i < size; i++)
    {
        arr[i] = 0;
    }
}

void array_sort(int arr[], const int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    puts("Adj meg 0 végjelig egész számokat az [1, 99] intervallumból!");

    int input = 0;
    int arr[SIZE];
    int arr_index = 0;
    array_zeroes(arr,SIZE);

    while(1)
    {
        printf("Szám: ");
        scanf("%d",&input);

        if(input == 0)
        {
            break;
        }
        else if(input > 99 || input < 1)
        {
            puts("Ez a szám kívül esik az elfogadható intervallumon!");
        }        
        else
        {
            if(array_contains(arr,SIZE,input) == 0)
            {
                arr[arr_index] = input;
                arr_index++;
            }
        }

    }
    
    printf("%d db különböző szám lett megadva.\n",arr_index);
    array_sort(arr,arr_index);
    print_array(arr,arr_index);

    return 0;
}