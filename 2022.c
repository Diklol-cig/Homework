#include<stdio.h>

void acTestMacro ( )
{
    printf( "File : %s\n Date : %s\n Time : %s \n Line : %d\n STDC : %d\n",__FILE__, __DATE__, __TIME__, __LINE__, __STDC__ );
}

void kiiras()
{
    printf("%s\n", __FILE__);
}
int main ( int argc, char *argv )
{
    acTestMacro();
    kiiras();
    return 0;
}