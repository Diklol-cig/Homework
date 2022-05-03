#include <stdio.h>
#include <string.h>

int swap(int x)
{      
}


int main()
{
    int cellak = 600;
    int arr[cellak];
    //memset(arr, 0, sizeof arr);
    int lepes = 1;
    int index;
    
    
    while (lepes<=cellak)
    {
        printf("%d. lepes: ", lepes);
        index = 0;
        for (int i = 0; i<cellak; i++)
        {
            if (lepes==1)
            {
                arr[i]= 1;
            }
            index = i+1;
            if ((index%lepes) == 0 && lepes>1)
            {
                
                if (arr[i] == 1)
                {
                arr[i] = 0;
                }
                else if (arr[i] == 0)
                {
                arr[i] = 1;
                } 
            }
            //printf("%d", arr[i]);
        }
        
        puts("");
        lepes++;
    }
    int indexek[600];
    int j = 0;
    for (int i= 0; i<cellak; i++)
    {
        if (arr[i] == 1)
        {
            indexek[j] = i+1;
            j++;
        }
    }
    for (int i = 0; i<j; i++)
    {
        printf("%d, ", indexek[i]);
    }
}