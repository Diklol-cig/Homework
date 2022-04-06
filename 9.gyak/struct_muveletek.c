#include <stdio.h>

typedef struct {
    int x;
    int y;
} pont;

void kiir(const pont p, const char* nev)
{
    printf("%s(%d, %d)\n", nev, p.x, p.y);
}

pont origo()
{
    pont o = {0,0};
    return o;
}

int main()
{
    pont a = {1,2};
    pont b = {6,5};
    
    pont zero = origo();
    //pont c;

//    c = a; //Rekordnak ertekul adok egy masik rekordot
//   c.x = 99;

    //if(a==b){
        //Nem fog mukodni
    //}
    kiir(a, "A");
    kiir(b, "B");
    kiir(zero, "ORIGO");
}