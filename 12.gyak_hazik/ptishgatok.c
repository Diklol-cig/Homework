#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 1000

typedef char* string;


int strcmpi(const char* s1, const char* s2)
{
    if (strlen(s1) != strlen(s2)){
        return 1;
    }
    for (int i=0; i<strlen(s1); i++){
        if(islower(s1[i])){
            if(s1[i] == s2[i] || s2[i] == s1[i]-32){
            }
            else{
                return 1;
            }
        }
        if(isupper(s1[i])){
            if(s1[i] == s2[i] || s2[i] == s1[i]+32){
            }
            else{
                return 1;
            }
        }
    }
    return 0;
}

string jo_nev (string nev)
{
     if (islower(nev[0]))
    {
        nev[0] -= 32;
    }
         
    for (int i= 1; nev[i]!= '\0'; i++)
    {
       if (isupper(nev[i]))
        {
            nev[i] += 32;
        }
    }
    return nev;
}

void rendez(string str[], int n)
{
    char s[100];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(str[i],str[j])>0){
                strcpy(s,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],s);
         }
      }
   }
}

int main()
{

FILE *fp = fopen("hallgatok.csv","r");

if (fp == NULL)
{
    fprintf(stderr, "Hiba\n");
    exit(1);
}

char sor[MAX];
char *p;
string nev;
int kor;
string szak;
string Jo_nevek[MAX];
int i = 0;

while (fgets(sor, MAX, fp) != NULL)
{
    sor[strlen(sor)-1] = '\0';

    p=strtok(sor,",");
    nev = p;
    p=strtok(NULL,",");
    kor = atoi(p);
    p=strtok(NULL,",");
    szak = p;

    if (strcmpi(szak, "PTI")== 0){
    //printf("nev: %s kor: %d szak: %s\n", nev, kor, szak);
    Jo_nevek[i] = jo_nev(nev);
    printf("Nev: %s\n", Jo_nevek[i]);
    i++;
    }
}


printf("%d\n", i);
//rendez(Jo_nevek, i);

int j, k;
string temp;
rendez(Jo_nevek, i);
for (int i = 0; i<3;i++)
{
    printf("%s\n", Jo_nevek[i]);
}

return 0;
}
