
/*
* Program To Print The Corresponding
* Celsius to Fahrenheit
*/

#include <stdio.h>

int main()
{
    float fahr ,celsius ;
    printf("Celsius -> Fahrenheit \n");
    for (celsius  = 0 ; celsius <= 200 ; celsius +=20 )
    {
        fahr = ((9.0/5.0)*celsius )+ 32;
        printf("%5.0f  -> %5.2f \n",celsius,fahr);
    }
    return 0;

}

