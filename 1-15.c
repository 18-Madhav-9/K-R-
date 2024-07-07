/*
* using function to print the temperature conversion table
*/

#include <stdio.h>

void fahr_celsius() ;

int main()
{
    fahr_celsius() ;
    return 0 ;
}

void fahr_celsius()
{
    float fahr , celsius ;
    printf("Fahrenheit To Celsius \n");
    for (fahr = 0 ; fahr <= 200 ; fahr = fahr + 20)
    {
        celsius = (5.0/9.0) * (fahr - 32);
        printf("%5.0f  -> %5.2f \n",fahr,celsius);
    }

}
