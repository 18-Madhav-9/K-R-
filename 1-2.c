/*
* Using " \c " as escape character or any other which is not listed
*/


#include <stdio.h>

main()
{
    printf("hello, ");
    printf("world");
    printf("\c");
}

/*
* Compiler gives Warning of unknown escape character
* But the code stills runs but now c is printed as it as
*/
