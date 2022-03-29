#include <stdio.h>
#include <math.h>

double bmi_kalkulator (double testmagassag, double testtomeg)
{
    double bmi = testtomeg/(testmagassag*testmagassag);

    return bmi;
}

void tajekoztat(double bmi_ertek)
{
    if (bmi_ertek<18.5)
    {
        puts("A testsulyozasi tablazat szerint a sovany vagy!");
    }
    else if (bmi_ertek>18.5 && bmi_ertek<25)
    {
        puts("A testsulyozasi tablazat szerint normal a testsulyod!");
    }
    else if (bmi_ertek>25 && bmi_ertek<30)
    {
        puts("A testsulyozasi tablazat szerint tulsulyos vagy!");
    }
    else
    {
        puts("A testsulyozasi tablazat szerint el vagy hizva!");
    }
}

int main()
{
    double testmagassag, testtomeg = 0;
    puts("Add meg a testmagassagod meterben!");
    scanf("%lf", &testmagassag);
    puts("Add meg a testsulyodat kilogrammban!");
    scanf("%lf", &testtomeg);


    double ertek = bmi_kalkulator(testmagassag, testtomeg);
    //printf("%lf", ertek);
    tajekoztat(ertek);

    //printf("tm: %.2lf, ts: %.3lf", testmagassag, testtomeg);


}