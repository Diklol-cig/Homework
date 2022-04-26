#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int choice(const int n, const int tomb[])
{
    int r_elem;
    
    int rand_index = rand() % n;

    int r_elem = tomb[rand_index];

    return r_elem;
}

int main()
{
    srand(time(NULL));

    int tomb[] = {1, 2, 3, 4, 5, 6, 7, 56, 564}; 
    int n = sizeof(tomb) / sizeof(int);

    int er = choice(n, tomb);
    printf("%d", er);

}