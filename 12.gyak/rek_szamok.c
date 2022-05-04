#include <stdio.h>

#define MAX 1000

int get_result(int i, int n, int total)
{
    if(i<n)
    {
        if(i%3==0 || i%5 == 0)
        {
            get_result(i+1,n, total+i);
        }
        else
        {
            get_result(i+1,n,total);
        }
    }
    else if(i>=1000)
    {
        return total;
    }
}

int ekisszam()
{
    int sum = 0;
    for (int i = 0; i<MAX;i++)
    {
        if(i%3==0 || i%5 == 0)
        {
            sum += i;
        }
    }
    return sum;
}


int main()
{
    int result = get_result(1,MAX,0);
    
    printf("sima: %d\nrekurzio: %d\n", ekisszam(),result);
}