/*
* Temperature Conversion Program
* But in Reverse Order
*/

#include <stdio.h>

int main()
{
    float fahr,celsius ;
    fahr = 200;
    printf("Fahrenheit -> Celsius \n");
    while (fahr >= 0 )
    {
        celsius = (5.0/9.0) * (fahr - 32 );
        printf("%5.0f  -> %5.2f \n",fahr,celsius);
        fahr -= 20 ;
    }
    return 0;
}
