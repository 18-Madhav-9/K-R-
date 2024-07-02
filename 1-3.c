/*
* Updating The Table of Fahrenheit to Celsius
* with A Heading
*/


#include <stdio.h>
// Table of Fahrenheit to Celsius
int main()
{
    float fahr ,celsius ;
    printf("Fahrenheit ->  Celsisus\n");
    for (fahr = 0 ; fahr <= 200 ; fahr+=20 )
    {
        celsius  = (5.0/9.0) * (fahr - 32);
        // Using n.m between % n.m f  for formating the output
        // n =  how much character wide
        // m = how much number after decimal
        printf("%5.0f -> %5.2f \n" ,fahr,celsius);
    }

    return 0;
}
