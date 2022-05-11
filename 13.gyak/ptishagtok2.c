#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define SIZE 200

typedef char* string;

int strcmpi( char* s1,  char* s2)
{
    int karakter=0;
    
    for (int i=0; i<strlen(s1); i++){
       karakter=0;
        if(islower(s1[i])){
            if(s1[i] == s2[i] || s2[i] == s1[i]-32){
                karakter=1;
            }
            else{
                return s1[i]-s2[i];
            }
        }
        if(isupper(s1[i])){
            if(s1[i] == s2[i] || s2[i] == s1[i]+32){
                karakter=1;
            }
            else{
                return s1[i]-s2[i];
            }
        }
        if(karakter==0 && s1[i]!=s2[i]){
            return s1[i]-s2[i];
        }
    }
    if (strlen(s1)<strlen(s2)){
        return -1;
    }
    else if(strlen(s1)>strlen(s2)){
        return 1;
    }
    return 0;
}

int main()
{
    string fajlnev = "nevek.csv";

    char input[SIZE], s[100], *p, nevek[100][100];
    string nev, szak;
    int kor, counter=0, n=0;
    

    FILE *fp = fopen(fajlnev, "r");
    while (fgets(input, SIZE, fp) != NULL){
        input[strlen(input)-1]='\0';
        p=strtok(input, ",");
        nev=p;

        p=strtok(NULL,",");
        kor=atoi(p);

        p=strtok(NULL,",");
        szak=p;
        if(strcmpi("PTI", szak)==0){            
            strcpy(nevek[counter],nev);
            counter++;
        }    
    }
    fclose(fp);

    for(int i=0;i<counter;i++){
      for(int j=i+1;j<counter;j++){
         if(strcmp(nevek[i],nevek[j])>0){
            strcpy(s,nevek[i]);
            strcpy(nevek[i],nevek[j]);
            strcpy(nevek[j],s);
         }
      }
   }

   for(int i=0;i<counter;i++){
      nevek[i][0]=nevek[i][0]-32;
      if(i<counter-1){
      printf("%s, ",nevek[i]);
      }
      else{
          printf("%s \n", nevek[i]);
      }
   }
    return 0;
}