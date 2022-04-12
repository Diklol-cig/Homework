#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomint(int also, int felso)
{
   int veletlen=rand();
   int intervallum=felso-also+1;
   veletlen=veletlen%intervallum;
   veletlen=also+veletlen;
   return veletlen;
}
void rendez(int meret, int tomb[])
   {
       int TMP;
       int kesz=0;
       while(kesz<meret)
       {
           for(int i=0;i<meret;i++)
           {
               if(tomb[i]>tomb[i+1])
               {
                   TMP=tomb[i];
                   tomb[i]=tomb[i+1];
                   tomb[i+1]=TMP;
               }
           }
           kesz++;
       }
   }
int main()
{
   int darabszam;
   int min, max;
   srand(time(NULL));

   printf("Hany darab random szamot kersz?\n");
   scanf("%d",&darabszam);
   printf("Also hatar: ");
   scanf("%d",&min);
   printf("Felso hatar (zart intervallum): ");
   scanf("%d",&max);

   int szamok[darabszam];

   for(int i=0;i<darabszam;i++) 
   {
       szamok[i]=randomint(min,max);
       for(int k=0;k<i;k++)
       {
           if(szamok[k]==szamok[i]) 
           {
               szamok[i]=randomint(min,max);
               k=0;
           }
       }
   }
   rendez(darabszam,szamok);
   printf("A generalt szamok: ");
   for(int k=0;k<darabszam;k++) printf("%d ",szamok[k]);

   return 0;
}