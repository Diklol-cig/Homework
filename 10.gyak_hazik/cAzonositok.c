#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

int is_valid_c_identifier(const char* input)
{
    int result=0;
    int valid=0;
    for(int i=0;input[i]!='\0';i++)
    {
        if(input[0]>=48 && input[0]<=57) return 0;
        if(input[i]>=48 && input[i]<=57) valid++;
        if(input[i]>=65 && input[i]<=90) valid++;
        if(input[i]>=97 && input[i]<=122) valid++;
        if(input[i]==95) valid++;
    }
    if(valid==strlen(input) && valid!=0) result=1;
    return result;
}
int main()
{
    char azonositok[SIZE];
    int darab=0;
    int vizsgal;
    int szam=0;
    printf("Adj meg sztringeket '*' vegjelig! \n");
    do
    {
        puts("");
        printf("Input: ");
        fgets(azonositok,SIZE,stdin);
        azonositok[strlen(azonositok)-1]='\0';
        if(strcmp("*",azonositok)==0) break;
        if(is_valid_c_identifier(azonositok)==1) puts("YES");
        else puts("NO");

    }
    while(strcmp("*",azonositok)!=0);
    return 0;
}