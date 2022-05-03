#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    // szamok 1-45 ig
    //x1+x2+x3+x4+x5+x6=90
    //x1*x2*x3*x4*x5*x6=996300
    //primtenyzos felbontas = 2*2*3*3*3*3*3*5*5*41
    int x1;
    int x2;
    int x3;
    int x4;
    int x5;
    int x6;
    int arr[6];
    int sum = 0;
    int szorzat = 1;
    int flag = 0;
    srand(time(NULL));
    
    while(1)
    {
    x1 = (rand()% 45)+1;
    x2 = (rand()% 45)+1;
    x3 = (rand()% 45)+1;
    x4 = (rand()% 45)+1;
    x5 = (rand()% 45)+1;
    x6 = (rand()% 45)+1;

    for (int i = 0; i<6; i++)
    {
        arr[i]= (rand()% 45)+1;
        //printf("%d ",arr[i]);
    }
    //puts(" ");
    sum = arr[1]+arr[2]+arr[3]+arr[4]+arr[5]+arr[6];
    szorzat = arr[1]*arr[2]*arr[3]*arr[4]*arr[5]*arr[6];
    /*if (sum >90 || sum< 90)
    {
        //puts("Nem jo sum");
        continue;
    }
    else if(szorzat<996300 || szorzat>996300)
    {
        //puts("Nem jo szorzat");
        continue;
    }
    else */if (sum == 90 && szorzat == 996300)
    {
        puts("Jo szamok");
        
        break;
    }
    }
    printf("Megoldas: %d %d %d %d %d %d", arr[1],arr[2],arr[3],arr[4],arr[5],arr[6]);

    //Megoldas: 41 18 9 2 15 5;
}